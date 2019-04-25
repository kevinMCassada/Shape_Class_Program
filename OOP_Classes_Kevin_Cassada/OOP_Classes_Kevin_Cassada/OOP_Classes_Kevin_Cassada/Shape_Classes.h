#pragma once
#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;
// Base Class "Parent"
class Shape
{
	//Accessible by the derived class
protected:
	string name;
	double perimeter;
	double surfaceArea;

public:
	void setName(string n) { name = n; }
	void setPerimeter(double p) { perimeter = p; }
	void setSurfaceArea(double sa) { surfaceArea = sa; }
};

//Derived Class "Child"
class RectangleShape :public Shape
{
private:
	double length;
	double width;

public:
	void setLength(double l) { length = l; }
	void setWidth(double w) { width = w; }
	double getPerimeter() { return 2 * (length * width); }//Equation for perimeter for rectangle P=2(l+w)
	double getArea() { return (length * width); } //Equation for Area for a Rectangle A=(l*w)
	string getName() { return name; }
	double getLength() { return length; }
	double getWidth() { return width; }
	void drawShape()
	{
		cout << "\nDrawing for: ";
		changeColor(4);
		cout << name << endl;

		for (int i = 0; i < width; i++)
		{
			for (int j = 0; j < length; j++)
			{
				changeColor(4);
				cout << "*";
				changeColor(7);
			}
			cout << endl;
		}
	}
};

//Derived Class "Child"
class TriangleShape :public Shape
{
private:
	double base;
	double height;
	double sideA;
	double sideC;

public:
	void setBase(double b) { base = b; }
	void setHeight(double h) { height = h; }
	void setSideA(double sa) { sideA = sa; }
	void setSideC(double sc) { sideC = sc; }
	double getPerimeter() { return (sideA + base + sideC); } //Equation for perimeter of a triangle P=a+b+c
	double getArea() { return .5*(base * height); } //Equation for Area for a triangle A=.5(b+h)
	string getName()
	{
		if (base == sideA && sideA == sideC)
		{
			name = "Equilateral Triangle";
		}
		else if (((base == sideA) && base != sideC) ||
			((sideA == sideC) && sideA != base) ||
			((base == sideC) && base != sideA)
			)
		{
			name = "Isosceles Triangle";
		}
		else if (base != sideA && sideA != sideC && base != sideC)
		{
			name = "Scalene Triangle";
		}
		else
		{
			name = "Bad Triangle";
		}
		return name;
	}
	double getBase() { return base; }
	double getHeight() { return height; }
	double getSideA() { return sideA; }
	double getSideC() { return sideC; }
	void drawShape()
	{
		cout << "\nDrawing for: ";
		changeColor(6);
		cout << name << endl;
		for (int base = 1; base <= height; base++)
		{
			for (int sideA = 1; sideA <= base; sideA++)
			{
				changeColor(6);
				cout << "*";
				changeColor(7);
			}
			cout << endl;
		}
	}
};

//Derived Class "Child"
class CircleShape : public Shape
{
private:
	double PI;
	double radius;

public:
	void setRadius(double r) { radius = r; }
	void setPI(double p) { PI = p; }
	double getPerimeter() { return (2 * PI*radius); } //Equation for perimeter of a circle
	double getArea() { return (PI * pow(radius, 2)); } //Equation for area of a circle
	string getName() { return name; }
	double getRadius() { return radius; }
	double getPI() { return PI; }
	void drawShape()
	{
		cout << "\nDrawing for: " << name << endl;
		double console_ratio = 1.0 / 0.5;
		double a = console_ratio * radius;
		double b = radius;
		changeColor(5);
		for (double y = -radius; y <= radius; y++)
		{
			for (double x = -console_ratio * radius; x <= console_ratio * radius; x++)
			{
				double d = (x / a)*(x / a) + (y / b)*(y / b);
				if (d > 0.90 && d < 1.1)
				{
					cout << "*";
				}
				else
				{
					cout << " ";
				}
			}
			cout << endl;
		}
		cout << endl;
		changeColor(7);
	}
};

//Dervied Class "Child"
class SquareShape : public Shape
{
private:
	double side;

public:

	void setSide(double s) { side = s; }
	double getPerimeter() { return (4 * side); }
	double getArea() { return pow(side, 2); }
	string getName() { return name; }
	double getSide() { return side; }
	void drawShape()
	{
		cout << "\nDrawing for: " << name << endl;

		for (int i = 0; i < side; i++)
		{
			for (int j = 0; j < side; j++)
			{
				changeColor(11);
				cout << " * ";
				changeColor(7);
			}
			cout << endl;
		}
	}
};