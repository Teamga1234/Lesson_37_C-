#include "MyQueue.h"
#include "AudioCD.h"
#include <vector>
#include <Windows.h>

int main()
{
	/*myQueue::Queue<int> a;
	a.show();

	a.push_back(9);
	a.push_back(7);
	a.push_back(3);

	while (!a.isEmpty())
	{
		cout << "First: " << a.first() << endl;
		a.show();
		a.pop_front();
	}*/

	std::vector<AudioCD> allMusic;
	std::ifstream file("music.txt");
	if (file.is_open())
	{
		while (!file.eof())
		{
			AudioCD item;
			item.load(file);
			allMusic.push_back(item);
		}
		file.close();
	}
	/*cout << "Size: " << allMusic.size() << endl;*/

	myQueue::Queue < AudioCD> MyPlayer;
	MyPlayer.push_back(allMusic[3]);
	MyPlayer.push_back(allMusic[1]);
	MyPlayer.push_back(allMusic[3]);
	MyPlayer.push_back(allMusic[6]);
	cout << "--------------------------\n";
	while (!MyPlayer.isEmpty())
	{
		MyPlayer.first().show();
		Sleep(2000);
		system("cls");
		MyPlayer.pop_front();
	}
}