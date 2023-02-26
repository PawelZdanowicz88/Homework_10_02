#include <iostream>
#include <string>
#include "Figure.h"

Figure::Figure(std::string name, int sidesCount)
{
	this->sidesCount = sidesCount;
	this->name = name;
}
int Figure::get_sidesCount()
{
	return sidesCount;
}
std::string Figure::get_name()
{
	return name;
}
void Figure::print()
{
	std::cout << "Количество сторон: " << get_sidesCount();
}
