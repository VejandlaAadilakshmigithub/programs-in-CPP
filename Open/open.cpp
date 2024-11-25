
#include <iostream>
#include <vector>
#include <memory>

// Base class: Shape
class Shape {
public:
    virtual double area() const = 0; // Pure virtual function
    virtual ~Shape() = default; // Virtual destructor for proper cleanup
};

// Derived class: Rectangle
class Rectangle : public Shape {
public:
    Rectangle(double width, double height) : width_(width), height_(height) {}

    double area() const override {
        return width_ * height_;
    }

private:
    double width_, height_;
};

// Derived class: Circle
class Circle : public Shape {
public:
    Circle(double radius) : radius_(radius) {}

    double area() const override {
        return 3.14159 * radius_ * radius_;
    }

private:
    double radius_;
};

int main() {
    // Create a list of shapes (rectangle and circle)
    std::vector<std::shared_ptr<Shape>> shapes;

    shapes.push_back(std::make_shared<Rectangle>(4.0, 5.0)); // Add a rectangle
    shapes.push_back(std::make_shared<Circle>(3.0)); // Add a circle

    // Calculate the area of each shape
    for (const auto& shape : shapes) {
        std::cout << "Area: " << shape->area() << std::endl;
    }

    return 0;
}

/*#include<iostream>
#include<vector>
#include<memory>

class Shape
{
    public:
    virtual double area() const = 0;
    virtual ~Shape() = default;
};

class Rectangle : public Shape
{
     private:
        double width,height;
   
        public:
        Rectangle(double widht,double height) : width(width),height(height) {

        }
        double area() const override{
            return width*height;
        }

       
    };
    class Circle : public Shape{
        private:
        double radius;
    
    public:
    Circle(double radius):radius(radius){

    }
    double area() const override{
        return 3.14*radius*radius;
    }
    };

    int main()
    {
        std::vector<std::shared_ptr<Shape>> shapes;


        shapes.push_back(std::make_shared<Rectangle>(4.0, 3.0));
        shapes.push_back(std::make_shared<Circle>(3.0));

        for(const auto& shape :shapes){
            std::cout<<"area is:"<<shape->area()<<std::endl;
        }
        return 0;
    }
*/