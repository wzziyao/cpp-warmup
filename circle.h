// Name: Ziyao Wang
// Date: 2/21/2021

#include <iostream>

#ifndef CIRCLE_H_
#define CIRCLE_H_

class Circle {
private:
    float radius;

public:
    Circle();
    Circle(float radius);
    Circle(const Circle &c);
    ~Circle();

    Circle& operator=(const Circle& c);

    void setRadius(float newRadius);
    float getRadius();
    float computeArea();

    friend std::ostream& operator<<(std::ostream& os, const Circle& c);
    friend Circle operator+(const Circle& c1, const Circle& c2);
};

#endif /* CIRCLE_H_ */