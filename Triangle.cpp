#include <iostream>
#include <string>
#include "Triangle.h"

Triangle::Triangle(std::string name, int sidesCount) : Figure(name, sidesCount)
{
}
Triangle::Triangle(int sideA, int sideB, int sideC, int angleA, int angleB, int angleC) : Triangle("“реугольник", 3)
{
	this->sideA = sideA;
	this->sideB = sideB;
	this->sideC = sideC;
	this->angleA = angleA;
	this->angleB = angleB;
	this->angleC = angleC;
}
void Triangle::print()
{
	std::cout << name << ":" << std::endl;
	std::cout << "Cтороны: a=" << sideA << " b=" << sideB << " c=" << sideC << std::endl;
	std::cout << "”глы: A=" << angleA << " B= " << angleB << " C=" << angleC << std::endl;
	std::cout << std::endl;
}