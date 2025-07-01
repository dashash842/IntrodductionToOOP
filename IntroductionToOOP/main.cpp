#include<iostream>
using namespace std;

class Point
{
	double x;
	double y;
public:
	double det_x()const
	{
		return x;
	}
	double get_y()const
	{
		return y;
	}
	void set_x(double x)
	{
		this->x = x;
	}
	void set_y(double y)
	{
		this->y = y;
	}
};

//#define STRUCT_POINT


void main()
{
	setlocale(LC_ALL, "");
#ifdef STRUCT_POINT
	int a;     //Объявление переменной 'а' типа 'int'
	Point A;   //Объявление переменной 'A' типа 'Point'
	//создание объекта 'А'  структуры 'Point'
	//создание экземпляра 'А'  структуры 'Point'
   //'A' is instance of struct 'point'
	//instantient - создать объект
	A.x = 2;
	A.y = 3;
	cout << A.x << "\t" << A.y << endl;

	Point* pA = &A;
	cout << pA->x << "\t" << pA->y << endl;
#endif // STRUCT_POINT

	Point A;
	A.set_x(2);
	A.set_y(3);
	cout << A.get_y() << "\t" << A.get_y() << endl;
}