#pragma once
#include<iostream>
using namespace std;

#define delimeter "\n----------------------------------------\n"

//////////////////////////////////////////////////////////////////////
/////////            Объявление класса (Class declaration)   /////////

class String
{
	int size;   //размер строки в Байтах(с учетом NULL-terminator)
	char* str;  //адрес строки в динамической памяти
public:
	int get_size()const;
	const char* get_str()const;
	char* get_str();

	//     constructors:
	explicit String(int size = 80);
	String(const char* str);
	String(const String& other);
	String(String&& other);
	~String();

	//      operators
	String& operator=(const String& other);
	String& operator=(String&& other);
	char operator[](int i)const;
	char& operator[](int i);

	//    metods:
	void print()const;
};
String operator+(const String& left, const String& right);
std::ostream& operator<<(std::ostream& os, const String& obj);
/////////      Конец объявления класса (Class declaration end)        /////////
///////////////////////////////////////////////////////////////////////////////
