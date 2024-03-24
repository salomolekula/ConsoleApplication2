#pragma once
#include <iostream>
#include "Shape3D.h"
#include "Circle.h"

class Cylinder : public Shape3D
{
private:
    Circle* circle;
    float height;
    void CalculateVolume() override {
        volume = circle->GetArea() * height;
    }
public:
    Cylinder(Circle* circle, float height)
        : circle(circle), height(height) {}

    void Scale(float scaleFactor) override
    {

        circle->Scale(scaleFactor);
        height *= scaleFactor;
        CalculateVolume();

    };

    void ShowInfo() override
    {
        std::cout << "Я - " << GetName();
        GetVolume();
        std::cout << "Площадь моего основания - " << circle->GetArea() << "!\n\tМоя высота - " << height << "!";
    }

    std::string GetName() override
    {
        return "цилиндр!\n\t";
    }
};