#include <iostream>
#include <vector>
#include <memory> // For smart pointers

// Abstract class for encapsulation and abstraction
class Shape {
public:
    virtual double area() const = 0; // Pure virtual function for abstraction
    virtual void display() const = 0; // Pure virtual function for abstraction
    virtual ~Shape() {} // Virtual destructor
};

class Circle : public Shape {
private:
    double radius; // Encapsulation: private attribute

public:
    // Constructor with default argument
    Circle(double r = 1.0) : radius(r) {}

    // Getter and Setter
    double getRadius() const { return radius; }
    void setRadius(double r) { radius = r; }

    // Overriding virtual functions
    double area() const override { return 3.14159 * radius * radius; }
    void display() const override {
        std::cout << "Circle with radius " << radius << " has an area of " << area() << std::endl;
    }
};

class Rectangle : public Shape {
private:
    double length, width; // Encapsulation: private attributes

public:
    // Constructor with default arguments
    Rectangle(double l = 1.0, double w = 1.0) : length(l), width(w) {}

    // Getters and Setters
    double getLength() const { return length; }
    void setLength(double l) { length = l; }
    double getWidth() const { return width; }
    void setWidth(double w) { width = w; }

    // Overriding virtual functions
    double area() const override { return length * width; }
    void display() const override {
        std::cout << "Rectangle with length " << length << " and width " << width << " has an area of " << area() << std::endl;
    }
};

int main() {
    // Creating shapes using smart pointers to avoid memory leaks
    std::vector<std::shared_ptr<Shape>> shapes;
    shapes.push_back(std::make_shared<Circle>(3.0));
    shapes.push_back(std::make_shared<Rectangle>(4.0, 5.0));

    // Display information about each shape
    for (const auto& shape : shapes) {
        shape->display();
    }

    return 0;
}
