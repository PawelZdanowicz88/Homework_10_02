#include <iostream>
#include <string>
#include "Figure.h"
#include "Triangle.h"
#include "EquiluteralTriangle.h"
#include "IsoscelesTriangle.h"
#include "RectTriangle.h"

void print_info(Figure* fig)
{
    fig->print();
}

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Russian");
    system("chcp 1251");
    
    Triangle triangle(10, 20, 30, 50, 60, 70);
    print_info(&triangle);

    RectTriangle rectTriangle(10, 20, 30, 50, 60);
    print_info(&rectTriangle);

    IsoscelesTriangle isoscelesTriangle(10, 20, 50, 60);
    print_info(&isoscelesTriangle);

    EquiluteralTriangle equiluteralTriangle(30);
    print_info(&equiluteralTriangle);
  
    return 0;
}