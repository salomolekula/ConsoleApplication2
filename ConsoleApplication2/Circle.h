#pragma once

#include <iostream>
#include "Shape2D.h"

class Circle : public Shape2D {

private:
    float radius;
    void CalculateArea() override {
        area = radius * radius * 3, 1415;
    }

public:
    Circle(float radius)
        :radius(radius) {}

    void Scale(float scaleFactor) override
    {

        radius *= scaleFactor;
        CalculateArea();

    };

    void ShowInfo() override
    {
        std::cout << "� - " << GetName() << "��� ������� - " << GetArea() << "!\n\t��� ������ - " << radius << "!";
    }

    std::string GetName() override
    {
        return "����!\n\t";
    }

};