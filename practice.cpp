#include <iostream>

class Shape{
    public:
    virtual double area(){
        return 0;
    }
    virtual double perimeter(){
        return 0;
    }
};

class Circle : public Shape{
    public: 
    double radius;
    
    double area() override{
        return 3.14159 * radius * radius;
    }

    double perimeter() override{
        return 2 * 3.14159 * radius; 
    }

    Circle(double radius){
        this->radius = radius;
    }
};

class Triangle : public Shape{
    public: 
    double base;
    double height;
    double len1;
    double len2;
    double len3;

    double area() override{
        return 0.5 * base * height;
    }

    double perimeter() override{
        return len1 + len2 + len3;
    }

    Triangle(double base, double height, double len1, double len2, double len3){
        this->base = base;
        this->height = height;
        this->len2 = len2;
        this->len1 - len1;
        this->len3 = len3;   
    };
};

class Rectangle : public Shape{
    public:
    double length;
    double width;

    double area() override{
        return length * width;
    }

    double perimeter() override{
        return 2 * length + 2 * width;
    }

    Rectangle(double length, double width){
        this->length = length;
        this->width = width;
    }
};


int main(){   
    Circle Circle1(2.4);
    std::cout << Circle1.area() << '\n';
    std::cout << Circle1.perimeter();

    return 0;
}
