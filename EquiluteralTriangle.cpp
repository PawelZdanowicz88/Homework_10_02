#include "EquiluteralTriangle.h"
#include <string>

EquiluteralTriangle::EquiluteralTriangle(int sideA) : Triangle(sideA, sideA, sideA, 60, 60, 60)
{
	name = "Равносторонний треугольник";
}