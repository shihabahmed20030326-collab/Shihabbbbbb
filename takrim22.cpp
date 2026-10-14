
#include <iostream>
using namespace std;
class Shape
{
public:
    virtual double area() = 0;
};
class Rectangle : public Shape
{
private:
    double length;
    double width;
public:
    Rectangle (double l, double w)
    {
        length = l;
        width = w;
    }
    double area() override
    {
        return lenght * width;
    }
};
class circle : public Shape
{
private :
    double radius;
public:
    circle (double r)
    {
        radius = r;
    }
    double area() override
    {
        return 3.1416 * radius * redius;
    }
};
int main()
{
    Rectangle r(5,4);
    circle c(3);
    Shape *ptr;
    ptr = &r;
    cout << "Rectangle Area = " << ptr->area() << endl;

    ptr = &c;
    cout << "Circle Area = " << ptr->area() << endl;
    return 0;
}
