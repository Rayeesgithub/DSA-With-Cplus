#include <iostream>

// Abstract class
class Shape {
public:
    virtual void draw() = 0; // Pure virtual function

    void print() {
        std::cout << "Printing shape..." << std::endl;
    }
};

// Derived class
class Circle : public Shape {
public:
    void draw() override {
        std::cout << "Drawing a circle." << std::endl;
    }
};

// Derived class
class Rectangle : public Shape {
public:
    void draw() override {
        std::cout << "Drawing a rectangle." << std::endl;
    }
};

int main() {
    // Shape* shape = new Shape(); // Error: Cannot instantiate abstract class

    Circle circle;
    circle.draw();
    circle.print();

    Rectangle rectangle;
    rectangle.draw();
    rectangle.print();

    return 0;
}
