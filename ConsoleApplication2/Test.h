#pragma once

#include <iostream>
#include "Circle.h"
#include "Cylinder.h"
#include "Shape.h"
#include "Shape2D.h"
#include "Shape3D.h"
#include "Sphere.h"
#include "Square.h"
#include "Triangle.h"
#include "TriangularPiramid.h"




void test() {

    Triangle triangle(3.2, 4);
    triangle.ShowInfo();
    std::cout << std::endl;
    triangle.Scale(5);
    triangle.ShowInfo();
    std::cout << std::endl;

    Circle circle(5.5);
    circle.ShowInfo();
    std::cout << std::endl;
    circle.Scale(5);
    circle.ShowInfo();
    std::cout << std::endl;

    Square square(7.5);
    square.ShowInfo();
    std::cout << std::endl;
    square.Scale(5);
    square.ShowInfo();
    std::cout << std::endl;

    TriangularPiramid piramid(&triangle, 14);
    piramid.ShowInfo();
    std::cout << std::endl;
    piramid.Scale(1.5);
    piramid.ShowInfo();
    std::cout << std::endl;
    triangle.Scale(0.67);
    piramid.ShowInfo();
    std::cout << std::endl;

    Cylinder cylinder(&circle, 8);
    cylinder.ShowInfo();
    std::cout << std::endl;
    cylinder.Scale(1.5);
    cylinder.ShowInfo();
    std::cout << std::endl;
    circle.Scale(0.67);
    cylinder.ShowInfo();
    std::cout << std::endl;

    Sphere sphere(4.9);
    sphere.ShowInfo();
    std::cout << std::endl;
    sphere.Scale(1.5);
    sphere.ShowInfo();
    std::cout << std::endl;

    if (circle > &triangle) std::cout << "проверка оператора >" << std::endl;
    if (triangle < &circle) std::cout << "проверка оператора <" << std::endl;
    if (!(circle == &triangle)) std::cout << "проверка оператора ==" << std::endl;

    if (cylinder > &piramid) std::cout << "проверка оператора >" << std::endl;
    if (piramid < &cylinder) std::cout << "проверка оператора <" << std::endl;
    if (!(cylinder == &piramid)) std::cout << "проверка оператора ==" << std::endl;

}