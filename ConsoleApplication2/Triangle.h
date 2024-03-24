#pragma once

#include <iostream>
#include "Shape2D.h"

class Triangle : public Shape2D {

private:

    float base;
    float height;

    void CalculateArea() override {
        area = base * height / 2;
    }

public:

    Triangle(float base, float height)
        : base(base), height(height) {}

    void Scale(float scaleFactor) override
    {

        base *= scaleFactor;
        height *= scaleFactor;
        CalculateArea();

    };

    void ShowInfo() override
    {
        std::cout << "Я - " << GetName() << "Моя площадь - " << GetArea() << "!\n\tМоё основание - " << base << "!\n\tМоя высота - " << height << "!";
    }

    std::string GetName() override
    {
        return "треугольник!\n\t";
    }

};