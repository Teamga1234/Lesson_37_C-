#pragma once
#include <fstream>
#include <string>
#include <iostream>
class AudioCD
{
	std::string name;
	std::string author;
	int year;
public:
	AudioCD();
	AudioCD(std::string name, std::string author, int year);
	void show()const;
	std::string getName()const;
	void load(std::ifstream& file);

};

