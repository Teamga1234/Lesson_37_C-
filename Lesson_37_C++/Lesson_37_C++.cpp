#include "MyQueue.h"
#include "AudioCD.h"
#include <vector>

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
	cout << "Size: " << allMusic.size() << endl;
}