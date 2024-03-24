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
        std::cout << "� - " << GetName() << "��� ������� - " << GetArea() << "!\n\t�� ��������� - " << base << "!\n\t��� ������ - " << height << "!";
    }

    std::string GetName() override
    {
        return "�����������!\n\t";
    }

};