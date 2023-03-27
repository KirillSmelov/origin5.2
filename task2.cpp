#include <iostream>
#include<string>
#include<windows.h>
class Figure
{
protected:
    std::string name = "Фигура";
public:
    Figure()
    {
        
    }
    virtual void print()
    {
        std::cout << name << ":" << std::endl;
 
    }
    virtual void Sides()
    {

    }
    virtual void Angles()
    {

    }
};
class Triangle:public Figure
{
protected:
    int a, b, c;
    int A, B, C;
    std::string name = "Треугольник";
public:
    Triangle(int a,int b,int c,int A,int B,int C):Figure()
    {
        this->a = a;
        this->b = b;
        this->c = c;
        this->A = A;
        this->B = B;
        this->C = C;
    }
    virtual std::string GetName()
    {
        return name;
    }
     void Sides() override
    {
        std::cout<< "Стороны: " << "a = " << a << " b = " << b << " c = " << c << std::endl;
    }
     void Angles() override
    {
        std::cout << "Углы: " << " A = " << A << " B = " << B << " C = " << C << std::endl;
    }
     void print() override
     {
         std::cout << GetName() << ":" << std::endl;
         Sides();
         Angles();
     }
};
class Triangle90 :public Triangle
{
protected:
    std::string name = "Прямоугольный треугольник";
public:
    Triangle90(int a ,int b ,int c , int A ,int B ):Triangle(a,b,c,A,B,90)
    {
        this->a = a;
        this->b = b;
        this->c = c;
        this->A = A;
        this->B = B;
        this->C = C;
    }
    std::string GetName() override
    {
        return name;
    }
    void Sides() override
    {
        std::cout << "Стороны: " << "a = " << a << " b = " << b << " c = " << c << std::endl;
    }
    void Angles() override
    {
        std::cout << "Углы: " << " A = " << A << " B = " << B << " C = " << C << std::endl;
    }
};
class IsoscelesTriangle :public Triangle
{
protected:
    std::string name = "Равнобедренный треугольник";
public:
    IsoscelesTriangle(int a, int b, int A, int B) :Triangle(a, b, a, A, B, A)
    {
        this->a = a;
        this->b = b;
        this->c = c;
        this->A = A;
        this->B = B;
        this->C = C;
    }
    std::string GetName() override
    {
        return name;
    }
    void Sides() override
    {
        std::cout << "Стороны: " << "a = " << a << " b = " << b << " c = " << c << std::endl;
    }
    void Angles() override
    {
        std::cout << "Углы: " << " A = " << A << " B = " << B << " C = " << C << std::endl;
    }
};
class Triangle60 :public Triangle
{
protected:
    std::string name = "Равносторонний треугольник";
public:
    Triangle60(int a) :Triangle(a, a, a, 60, 60, 60)
    {
        this->a = a;
        this->b = b;
        this->c = c;
        this->A = A;
        this->B = B;
        this->C = C;
    }
    std::string GetName() override
    {
        return name;
    }
    void Sides() override
    {
        std::cout << "Стороны: " << "a = " << a << " b = " << b << " c = " << c << std::endl;
    }
    void Angles() override
    {
        std::cout << "Углы: " << " A = " << A << " B = " << B << " C = " << C << std::endl;
    }
};
class Quadrangle:public Figure
{
protected:
    int a, b, c, d;
    int A, B, C, D;
    std::string name = "Четырёхугольник";
public:
    Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D):Figure()
    {
        this->a = a;
        this->b = b;
        this->c = c;
        this->d = d;
        this->A = A;
        this->B = B;
        this->C = C;
        this->D = D;
    }
    virtual std::string  GetName()
    {
        return name;
    }
     void Sides() override
    {
        std::cout << "Стороны: " << "a = " << a << " b = " << b << " c = " << c <<" d = "<<d<< std::endl;
    }
     void Angles() override
    {
        std::cout << "Углы: " << " A = " << A << " B = " << B << " C = " << C <<" D = "<<D<< std::endl;
    }
     void print() override
     {
         std::cout << GetName() << ":" << std::endl;
         Sides();
         Angles();
     }
};
class Parallelogram:public Quadrangle
{
protected:
    std::string name = "Параллелограмм";
public:
    Parallelogram(int a, int b, int A, int B) :Quadrangle(a, b, a, b, A, B, A, B)
    {
        this->a = a;
        this->b = b;
        this->c = c;
        this->d = d;
        this->A = A;
        this->B = B;
        this->C = C;
        this->D = D;
    }
     std::string  GetName() override
    {
        return name;
    }
     void Sides() override
    {
        std::cout << "Стороны: " << "a = " << a << " b = " << b << " c = " << c << " d = " << d << std::endl;
    }
     void Angles() override
    {
        std::cout << "Углы: " << " A = " << A << " B = " << B << " C = " << C << " D = " << D << std::endl;
    }
     
};
class Recangle:public Parallelogram
{
protected:
    std::string name = "Прямоугольник";
public:
    Recangle(int a, int b):Parallelogram(a, b, 90,90)
    {
        this->a = a;
        this->b = b;
        this->c = c;
        this->d = d;
        this->A = A;
        this->B = B;
        this->C = C;
        this->D = D;
    }
     std::string  GetName() override
     {
         return name;
     }
     void Sides() override
     {
         std::cout << "Стороны: " << "a = " << a << " b = " << b << " c = " << c << " d = " << d << std::endl;
     }
     void Angles() override
     {
         std::cout << "Углы: " << " A = " << A << " B = " << B << " C = " << C << " D = " << D << std::endl;
     }
};
class Rhomb:public Parallelogram
{
protected:
    std::string name = "Ромб";
public:
    Rhomb(int a, int A, int B) :Parallelogram(a, a, A, B)
    {
        this->a = a;
        this->b = b;
        this->c = c;
        this->d = d;
        this->A = A;
        this->B = B;
        this->C = C;
        this->D = D;
    }
    std::string  GetName() override
    {
        return name;
    }
    void Sides() override
    {
        std::cout << "Стороны: " << "a = " << a << " b = " << b << " c = " << c << " d = " << d << std::endl;
    }
    void Angles() override
    {
        std::cout << "Углы: " << " A = " << A << " B = " << B << " C = " << C << " D = " << D << std::endl;
    }
};
class Square:public Rhomb
{
protected:
    std::string name = "Квадрат";
public:
    Square(int a) :Rhomb(a,90,90)
    {
        this->a = a;
        this->b = b;
        this->c = c;
        this->d = d;
        this->A = A;
        this->B = B;
        this->C = C;
        this->D = D;
    }
    std::string  GetName() override
    {
        return name;
    }
    void Sides() override
    {
        std::cout << "Стороны: " << "a = " << a << " b = " << b << " c = " << c << " d = " << d << std::endl;
    }
    void Angles() override
    {
        std::cout << "Углы: " << " A = " << A << " B = " << B << " C = " << C << " D = " << D << std::endl;
    }
};
void print(Figure* figure)
{
    figure->print();
}
int main()
{
    system("chcp 1251");
    Triangle triangle(10,20,30,50,60,70);
    print(&triangle);
    std::cout<<std::endl;
    Triangle90 triangle90(10, 20, 30, 50, 60);
    print(&triangle90);
    std::cout << std::endl;
    IsoscelesTriangle isoscelestriangle(10, 20, 50, 60);
    print(&isoscelestriangle);
    std::cout << std::endl;
    Triangle60 triangle60(30);
    print(&triangle60);
    std::cout << std::endl;
    Quadrangle quadrangle(10, 20, 30, 40, 50, 60, 70, 80);
    print(&quadrangle);
    std::cout << std::endl;
    Recangle rectangle(10, 20);
    print(&rectangle);
    std::cout << std::endl;
    Square square(20);
    print(&square);
    std::cout << std::endl;
    Parallelogram parallelogram(20, 30, 30, 40);
    print(&parallelogram);
    std::cout << std::endl;
    Rhomb rhomb(30, 30, 40);
    print(&rhomb);
    return 0;
}
