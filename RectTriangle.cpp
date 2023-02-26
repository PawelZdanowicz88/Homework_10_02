#include "RectTriangle.h"

RectTriangle::RectTriangle(int sideA, int sideB, int sideC, int angleA, int angleB) : Triangle (sideA, sideB, sideC, angleA, angleB, 90)
{
	name = "прямоугольный треугольник";
}