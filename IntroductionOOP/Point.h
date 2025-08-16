#pragma once
#include<iostream>
using namespace std;

#define delimiter "\n--------------------------------------\n"
//using std::cin
//std::cout
//std::endl
// 
//////////////////////////////////////////////////////////////////////
/////////            ќбъ€вление класса (Class declaration)   /////////
class Point
{
	double x;
	double y;
public:
	double get_x()const;
	double get_y()const;
	void set_x(double x);
	void set_y(double y);
	//        Constructors
	/*Point()
	{
		x = y = 0;
		cout << "DefoultConstructor:\t" << this << endl;
	}*/
	/*Point(double x)
	 {
		this->x = x;
		this->y = 0;
		cout << "SinglArgumentConstructor: " << this << endl;
		//конструктор с одним парамтером
		print();
	}*/
	Point(double x = 0, double y = 0);
	Point(const Point& other);
	~Point();

	//operators
	Point& operator=(const Point& other);

	Point& operator++();
	Point operator++(int);


	//        Methods:
	double distance(Point& other)const;
	void print()const;
};

double distance(const Point& A, const Point& B);

Point operator+(const Point& left, const Point& right);

bool operator== (const Point& left, const Point& right);
bool operator!=(const Point& left, const Point& right);
/////////       онец объ€влени€ класса (Class declaration end)        /////////
///////////////////////////////////////////////////////////////////////////////