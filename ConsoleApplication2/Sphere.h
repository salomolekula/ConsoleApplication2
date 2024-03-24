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
        std::cout << "� - " << GetName();
        GetVolume();
        std::cout << "��� ������ - " << radius << "!";
    }

    std::string GetName() override
    {
        return "���!\n\t";
    }

};