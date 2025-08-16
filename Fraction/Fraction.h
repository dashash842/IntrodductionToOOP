#pragma once
#include<iostream>
using namespace std;

class Fraction;      // объ€вление класса
Fraction operator*(Fraction left, Fraction right);  //объ€вление оператора
Fraction operator/(const Fraction& left, const Fraction& right);
Fraction operator+(Fraction left, Fraction right);
Fraction operator-(const Fraction left, const Fraction right);
//////////////////////////////////////////////////////////////////////
/////////            ќбъ€вление класса (Class declaration)   /////////

class Fraction       //описание класса
{
	int integer;       //цела€ часть
	int numerator;     //числитель
	int denominator;   //знаменатель
public:
	int get_integer()const;
	int get_numerator()const;
	int get_denominator()const;
	void set_integer(int integer);
	void set_numerator(int numerator);
	void set_denominator(int denominator);

	//          constructors:
	Fraction();
	explicit Fraction(int integer);
	Fraction(double decimal);
	Fraction(int numerator, int denominator);
	Fraction(int integer, int numerator, int denominator);
	Fraction(const Fraction& other);
	~Fraction();

	//          Operators:
	Fraction& operator=(const Fraction& other);
	Fraction& operator *=(const Fraction& other);
	Fraction& operator /=(const Fraction& other);
	Fraction& operator +=(const Fraction& other);
	Fraction& operator -=(const Fraction& other);

	//       Incremento/Decremento
	Fraction& operator++();
	Fraction& operator++(int);
	Fraction& operator--();
	Fraction& operator--(int);

	//           Type-cast operators
	explicit operator int()const;
	operator double()const;

	//          Methods:
	Fraction& to_improper();
	Fraction& to_proper();
	Fraction inverted()const;
	Fraction& reduce();
	void print()const;
};

Fraction operator+(Fraction left, Fraction right);
Fraction operator-(Fraction left, Fraction right);
Fraction operator*(Fraction left, Fraction right);
Fraction operator/(const Fraction& left, const Fraction& right);

//                   Comparison operators
bool operator==(Fraction left, Fraction right);
bool operator!=(const Fraction& left, const Fraction& right);
bool operator>(Fraction left, Fraction right);
bool operator<(Fraction left, Fraction right);
bool operator>=(const Fraction& left, const Fraction& right);
bool operator<=(const Fraction& left, const Fraction& right);

std::ostream& operator<<(std::ostream& os, const Fraction& obj);
std::istream& operator>>(std::istream& is, Fraction& obj);
/////////       онец объ€влени€ класса (Class declaration end)        /////////
///////////////////////////////////////////////////////////////////////////////
