#include<iostream>
using namespace std;

class Shape {
public:
    virtual void calculate() = 0;
};

class Circle : public Shape {
	
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    void calculate() {
        double area = 3.14159 * radius * radius;
        cout << "Area of the circle: " <<area<<endl;
    }
};

class Triangle : public Shape {
private:
    double base;
    double height;

public:
    Triangle(double b, double h) : base(b), height(h) {}

    void calculate() {
        double area = 0.5 * base * height;
        cout << "Area of the triangle: " <<area<<endl;
    }
};

class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    void calculate() {
        double area = length * width;
        cout << "Area of the rectangle: " <<area<<endl;
    }
};

int main() {

    Circle circle(5);
    Triangle triangle(4, 6);
    Rectangle rectangle(3, 7);

    circle.calculate();
    triangle.calculate();
    rectangle.calculate();

    return 0;
}
