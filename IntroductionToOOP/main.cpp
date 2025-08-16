#include<iostream>
using namespace std;

#define delimiter "\n--------------------------------------\n"
//using std::cin
//std::cout
//std::endl
// 
//////////////////////////////////////////////////////////////////////
/////////            Объявление класса (Class declaration)   /////////
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
	/////////      Конец объявления класса (Class declaration end)        /////////
    ///////////////////////////////////////////////////////////////////////////////

	/// ----------------------------------------------------------------------///

    //////////////////////////////////////////////////////////////////////
    /////////            Определение класса (Class definition)   /////////

	double Point::get_x()const
	{
		return x;
	}
	double Point::get_y()const
	{
		return y;
	}
	void Point::set_x(double x)
	{
		this->x = x;
	}
	void Point::set_y(double y)
	{
		this->y = y;
	}
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
	Point::Point(double x = 0, double y = 0)
	{
		this->x = x;
		this->y = y;
		cout << "Constructor:\t\t" << this << endl;
	}
	Point::Point(const Point& other)
	{
		this->x = other.x;
		this->y = other.y;
		cout << "CopyConstructor:\t" << this << endl;
	}
	Point::~Point()
	{
		cout << "Destructor:\t\t" << this << endl;
	}

	//operators
	Point& operator=(const Point& other)
	{
		this->x = other.x;
		this->y = other.y;
		cout << "CopyAssigment:\t\t" << this << endl;
		return *this;
	}

	Point& operator++()    //Prefix increment
	{
		x++;
		y++;
		return *this;
	}
	Point operator++(int)  //Postfix (Suffix) increment
	{
		Point old = *this; // сохраняем старое значение объекта
		x++;
		y++;
		return old;
	}

	//        Methods:
	double distance(Point& other)const
	{
		//this - эта точка (находим расстояние от этой точки)
		//other - та точка (до указанной точки)	
		//this->x *= 100;
		//other.x *= 100;    //e0137
		double x_distance = this->x - other.x;
		double y_distance = this->y - other.y;
		double distance = sqrt(x_distance * x_distance + y_distance * y_distance);
		return distance;

	}
	void print()const
	{
		cout << this << ": X = " << x << ",\tY = " << y << endl;
	}
};

double distance(const Point& A, const Point& B)
{
	//A.set_x(A.get_x() * 100);
	double x_distance = A.get_x() - B.get_x();
	double y_distance = A.get_y() - B.get_y();
	double distance = sqrt(x_distance * x_distance + y_distance * y_distance);
	return distance;
}

Point operator+(const Point& left, const Point& right)
{
	Point result;
	result.set_x(left.get_x() + right.get_x());
	result.set_y(left.get_y() + right.get_y());
	return result;
}

bool operator== (const Point& left, const Point& right)
{
	/*
	if (left.get_x() == right.get_x() && left.get_y() == right.get_y())
		return true;
	else
		return false;
	*/
	return left.get_x() == right.get_x() && left.get_y() == right.get_y();
}
bool operator!=(const Point& left, const Point& right)
{
	return !(left == right);
}
/////////      Конец определения класса (Class definition end)        /////////
///////////////////////////////////////////////////////////////////////////////

//#define STRUCT_POINT
//#define DINSTANCE_CHEK
//#define CONSTRUCTORS_CHECK
//#define ASSIGNMENT_CHECK
//#define ARIFMETICAL_OPERATORS_CHECK

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

#ifdef DINSTANCE_CHEK
	Point A;
	A.set_x(2);
	A.set_y(3);
	cout << A.get_x() << "\t" << A.get_y() << endl;

	Point B;
	B.set_x(7);
	B.set_y(8);
	cout << B.get_x() << "\t" << B.get_y() << endl;
	cout << delimiter << endl;
	cout << "Расстояние от точки 'A' до точки 'B': " << A.distance(B) << endl;
	cout << delimiter << endl;
	cout << "Расстояние от точки 'B' до точки 'A': " << B.distance(A) << endl;
	cout << delimiter << endl;
	cout << "Расстояние между точкуами 'A' и 'B': " << distance(A, B) << endl;
	cout << delimiter << endl;
	cout << "Расстояние между точкуами 'B' и 'A': " << distance(B, A) << endl;
	cout << delimiter << endl;


#endif // DINSTANCE_CHEK

#ifdef CONSTRUCTORS_CHECK

	/*for (int i = 0; i < 10; i++)
	{
		cout << i << "\t";
	}
	cout << endl;*/

	Point A;         //просто создаем объект, и для этого неявно вызывается конструктор по умолчанию
	A.print();
	//{
	//	Point B;
	//	cout << "Point B существует" << endl;
	//	B.distance(A);
	//}
	//cout << "Здесь Point B уже НЕ существует" << endl;

	Point B = 5;     //параметризованный конструктор позволяет создавать то, каким будет наш объект при создании
	B.print();       //singl-argument constrcor - конструктор с одним параметром

	Point C(7, 8);   //
	C.print();

	Point D = C;      //copy constructor
	D.print();

	Point E;      //Defoult constructor
	E = D;        //Assigment operators
	E.print();


#endif // CONSTRUCTORS_CHECK

#ifdef ASSIGNMENT_CHECK
	int a, b, c;
	a = b = c = 0;
	cout << a << "\t" << b << "\t" << c << endl;
	Point A, B, C;
	cout << delimiter << endl;
	A = B = C = Point(2, 3);
	//Point(2,3) - здесь мы явно вызываем конструкторб и создаем временный безымянный объект
	cout << delimiter << endl;
	A.print();
	B.print();
	C.print();
#endif // ASSIGNMENT_CHECK

#ifdef ARIFMETICAL_OPERATORS_CHECK
	Point A(2, 3);
	Point B(7, 8);
	Point C = A + B;
	C.print();

	A = B++;
	A.print();
	B.print();
#endif // ARIFMETICAL_OPERATORS_CHECK

	cout << (Point(2, 3) != Point(7, 8)) << endl;


}