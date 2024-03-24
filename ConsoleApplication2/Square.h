#pragma once

#include <iostream>
#include "Shape2D.h"

class Square :public Shape2D {
private:
    float side;
    void CalculateArea() override {
        area = side * side;
    }
public:
    Square(float side)
        : side(side) {}

    void Scale(float scaleFactor) override
    {

        side *= scaleFactor;
        CalculateArea();

    };

    void ShowInfo() override
    {
        std::cout << "Я - " << GetName() << "Моя площадь - " << GetArea() << "!\n\tМоя сторона - " << side << "!";
    }

    std::string GetName() override
    {
        return "квадрат!\n\t";
    }


};