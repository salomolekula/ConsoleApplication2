#pragma once

#include <string>

class Shape {
private:
    std::string name;
public:
    void virtual Scale(float scaleFactor) = 0;

    void virtual ShowInfo() = 0;

    std::string virtual GetName() = 0;
};