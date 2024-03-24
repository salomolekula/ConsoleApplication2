#pragma once
#include <iostream>
#include "Shape3D.h"

class Sphere : public Shape3D
{
private:
    float radius;
    void CalculateVolume() override {
        volume = 4 * 3.1415 * pow(radius, 2) / 3;
    }
public:
    Sphere(float radius)
        : radius(radius) {}

    void Scale(float scaleFactor) override
    {

        radius *= scaleFactor;
        CalculateVolume();;

    };

    void ShowInfo() override
    {
        std::cout << "Я - " << GetName();
        GetVolume();
        std::cout << "Мой радиус - " << radius << "!";
    }

    std::string GetName() override
    {
        return "шар!\n\t";
    }

};