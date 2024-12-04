#include "AudioCD.h"

AudioCD::AudioCD()
{
    name = "udefined";
    author = "udefined";
    year = 0;
}

AudioCD::AudioCD(std::string name, std::string author, int year)
{
    this->name = name;
    this->author = author;
    this->year = year;
}

void AudioCD::show() const
{
    std::cout << "Name: " << name << std::endl
        << "Author:" << author << std::endl
        << "Year: " << year << std::endl << std::endl;
}

std::string AudioCD::getName() const
{
    return name;
}

void AudioCD::load(std::ifstream& file)
{
    getline(file, name);
    getline(file, author);
    file >> year;
    file.get();

}
