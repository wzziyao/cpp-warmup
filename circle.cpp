#include "circle.h"
#include <math.h>

using namespace std;

Circle::Circle() {
    radius = 0;
}

Circle::Circle(float radius) {
    this->radius = radius;
}

Circle::Circle(const Circle& c)
{
   radius = c.radius;
}

Circle::~Circle() {}

Circle& Circle::operator=(const Circle& c)
{
   radius = c.radius;
   return *this;
}

float Circle::getRadius() {
    return radius;
}

void Circle::setRadius(float newRadius) {
    radius = newRadius;
}

float Circle::computeArea() {
    return M_PI * radius * radius;
}

std::ostream& operator<<(std::ostream& os, const Circle& c)
{
   os << c.radius;
   return os;
}

Circle operator+(const Circle& c1, const Circle& c2)
{
   float r = c1.radius + c2.radius;
   Circle c(r);
   return c;
}