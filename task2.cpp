﻿#include <iostream>
#include<string>
#include<windows.h>
class Triangle
{
protected:
    int a, b, c;
    int A, B, C;
    std::string name = "Треугольник";
public:
    Triangle(int a,int b,int c,int A,int B,int C)
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
    virtual void PrintSides()
    {
        std::cout<< "Стороны: " << "a = " << a << " b = " << b << " c = " << c << std::endl;
    }
    virtual void PrintAngles()
    {
        std::cout << "Углы: " << " A = " << A << " B = " << B << " C = " << C << std::endl;
    }
};
class Triangle90 :public Triangle
{
protected:
    int a, b, c;
    int A, B, C;
    std::string name = "Прямоугольный треугольник";
public:
    Triangle90(int a ,int b ,int c , int A ,int B ,int C):Triangle(a,b,c,A,B,C)
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
    void PrintSides() override
    {
        std::cout << "Стороны: " << "a = " << a << " b = " << b << " c = " << c << std::endl;
    }
    void PrintAngles() override
    {
        std::cout << "Углы: " << " A = " << A << " B = " << B << " C = " << C << std::endl;
    }
};
class IsoscelesTriangle :public Triangle
{
protected:
    int a, b, c;
    int A, B, C;
    std::string name = "Равнобедренный треугольник";
public:
    IsoscelesTriangle(int a, int b, int c, int A, int B, int C) :Triangle(a, b, c, A, B, C)
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
    void PrintSides() override
    {
        std::cout << "Стороны: " << "a = " << a << " b = " << b << " c = " << c << std::endl;
    }
    void PrintAngles() override
    {
        std::cout << "Углы: " << " A = " << A << " B = " << B << " C = " << C << std::endl;
    }
};
class Triangle60 :public Triangle
{
protected:
    int a, b, c;
    int A, B, C;
    std::string name = "Равносторонний треугольник";
public:
    Triangle60(int a, int b, int c, int A, int B, int C) :Triangle(a, b, c, A, B, C)
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
    void PrintSides() override
    {
        std::cout << "Стороны: " << "a = " << a << " b = " << b << " c = " << c << std::endl;
    }
    void PrintAngles() override
    {
        std::cout << "Углы: " << " A = " << A << " B = " << B << " C = " << C << std::endl;
    }
};
class Quadrangle
{
protected:
    int a, b, c, d;
    int A, B, C, D;
    std::string name = "Четырёхугольник";
public:
    Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D)
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
    virtual void PrintSides()
    {
        std::cout << "Стороны: " << "a = " << a << " b = " << b << " c = " << c <<" d = "<<d<< std::endl;
    }
    virtual void PrintAngles()
    {
        std::cout << "Углы: " << " A = " << A << " B = " << B << " C = " << C <<" D = "<<D<< std::endl;
    }
};
class Parallelogram:public Quadrangle
{
protected:
    int a, b, c, d;
    int A, B, C, D;
    std::string name = "Параллелограмм";
public:
    Parallelogram(int a, int b, int c, int d, int A, int B, int C, int D) :Quadrangle(a, b, c, d, A, B, C, D)
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
     void PrintSides() override
    {
        std::cout << "Стороны: " << "a = " << a << " b = " << b << " c = " << c << " d = " << d << std::endl;
    }
     void PrintAngles() override
    {
        std::cout << "Углы: " << " A = " << A << " B = " << B << " C = " << C << " D = " << D << std::endl;
    }
};
class Recangle:public Parallelogram
{
protected:
    int a, b, c, d;
    int A, B, C, D;
    std::string name = "Прямоугольник";
public:
    Recangle(int a, int b, int c, int d, int A, int B, int C, int D):Parallelogram(a, b, c, d, A, B, C, D)
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
     void PrintSides() override
     {
         std::cout << "Стороны: " << "a = " << a << " b = " << b << " c = " << c << " d = " << d << std::endl;
     }
     void PrintAngles() override
     {
         std::cout << "Углы: " << " A = " << A << " B = " << B << " C = " << C << " D = " << D << std::endl;
     }
};
class Rhomb:public Parallelogram
{
protected:
    int a, b, c, d;
    int A, B, C, D;
    std::string name = "Ромб";
public:
    Rhomb(int a, int b, int c, int d, int A, int B, int C, int D) :Parallelogram(a, b, c, d, A, B, C, D)
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
    void PrintSides() override
    {
        std::cout << "Стороны: " << "a = " << a << " b = " << b << " c = " << c << " d = " << d << std::endl;
    }
    void PrintAngles() override
    {
        std::cout << "Углы: " << " A = " << A << " B = " << B << " C = " << C << " D = " << D << std::endl;
    }
};
class Square:public Rhomb
{
protected:
    int a, b, c, d;
    int A, B, C, D;
    std::string name = "Квадрат";
public:
    Square(int a, int b, int c, int d, int A, int B, int C, int D) :Rhomb(a, b, c, d, A, B, C, D)
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
    void PrintSides() override
    {
        std::cout << "Стороны: " << "a = " << a << " b = " << b << " c = " << c << " d = " << d << std::endl;
    }
    void PrintAngles() override
    {
        std::cout << "Углы: " << " A = " << A << " B = " << B << " C = " << C << " D = " << D << std::endl;
    }
};
void print_info(Triangle* figure)
{
    std::cout << figure->GetName() << std::endl;
    figure->PrintSides();
    figure->PrintAngles();
}
void print_info2(Quadrangle* figure)
{
    std::cout << figure->GetName() << std::endl;
    figure->PrintSides();
    figure->PrintAngles();
}
int main()
{
    system("chcp 1251");
    Triangle triangle(10,20,30,50,60,70);
    print_info(&triangle);
    std::cout<<std::endl;
    Triangle90 triangle90(10, 20, 30, 50, 60, 90);
    print_info(&triangle90);
    std::cout << std::endl;
    IsoscelesTriangle isoscelestriangle(10, 20, 10, 50, 60, 50);
    print_info(&isoscelestriangle);
    std::cout << std::endl;
    Triangle60 triangle60(30, 30, 30,60, 60, 60);
    print_info(&triangle60);
    std::cout << std::endl;
    Quadrangle quadrangle(10, 20, 30, 40, 50, 60, 70, 80);
    print_info2(&quadrangle);
    std::cout << std::endl;
    Recangle rectangle(10, 20, 10, 20, 90, 90, 90, 90);
    print_info2(&rectangle);
    std::cout << std::endl;
    Square square(20, 20, 20, 20, 90, 90, 90, 90);
    print_info2(&square);
    std::cout << std::endl;
    Parallelogram parallelogram(20, 30, 20, 30, 30, 40, 30, 40);
    print_info2(&parallelogram);
    std::cout << std::endl;
    Rhomb rhomb(30, 30, 30, 30, 30, 40, 30, 40);
    print_info2(&rhomb);
    return 0;
}