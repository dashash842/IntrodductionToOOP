#include"Fraction.h"
//#define CONSTRUCTORS_CHECK
//#define ARIFMETICAL_OPERATORS_CHECK
//#define INCREMENTO_DECREMENTO_CHEK
//#define HOMEWORK
//#define COMPARISON_OPERATORS
#define STREAMS_CHECK
//#define TYPE_CONVERSION_BASICS
//#define CONVERSINS_FROM_OTHER_TO_CLASS
//#define CONVERSIONS_FROM_CLASS_TO_OTHER
//#define HAVE_A_NICE_DAY


void main()
{
	setlocale(LC_ALL, "");

#ifdef CONSTRUCTORS_CHECK
	Fraction A;       //Default constructor
	A.print();

	Fraction B = 5;   //Single-argument constructor
	B.print();

	Fraction C(1, 2);
	C.print();

	Fraction D(2, 3, 4);
	D.print();
#endif // CONSTRUCTORS_CHECK

#ifdef ARIFMETICAL_OPERATORS_CHECK
	Fraction A(2, 3, 4);
	A.print();
	Fraction B(3, 4, 5);
	B.print();

	Fraction C = A * B;
	C.print();


	C = A / B;
	C.print();
	
	A *= B;
	A.print();

	A /= B;
	A.print();
	
	C = A + B;
	C.print();
	

	

#endif // ARIFMETICAL_OPERATORS_CHECK

#ifdef INCREMENTO_DECREMENTO_CHEK
	double a = 2;
	double b = 0;
	b += a++;
	cout << a << endl;
	cout << b << endl;


	Fraction A(2, 3, 4);
	Fraction B;

	//B = ++A++;
	//A.print();
	//B.print();

	B = --A--;
	A.print();
	B.print();

#endif // INCREMENTO_DECREMENTO_CHEK

#ifdef HOMEWORK
	Fraction A(2, 3, 4);
	A.print();
	Fraction B(3, 4, 5);
	B.print();

	Fraction C = A - B;
	C.print();
	cout << "оператор '-'" << endl;
	
	A += B;
	A.print();
	cout << "оператор '+='" << endl;

	A -= B;
	A.print();                          //не правильно считает
	cout << "оператор -=" << endl;

#endif // HOMEWORK

#ifdef COMPARISON_OPERATORS

	cout << (2 == 3) << endl;
	cout << (Fraction(1, 3) <= Fraction(5, 11)) << endl;

#endif // COMPARISON_OPERATORS

#ifdef STREAMS_CHECK
	Fraction A(2, 3, 4);
	cout << "Введите простую дробь: ";
	cin >> A;
	cout << A << endl;
#endif // STREAMS_CHECK

#ifdef TYPE_CONVERSION_BASICS
	int a = 2;       //No conversion
	double b = 3;    //conversion from less to more
	int c = b;       //conversion from more to less without data loss
	int d = 5.5;     //conversion from more to less with data loss  
#endif // TYPE_CONVERSION_BASICS

#ifdef CONVERSINS_FROM_OTHER_TO_CLASS

	Fraction A = 5;          //Singl-Argument constructor

	cout << A << endl;

	Fraction B;
	//B = 8;           //1ArgConstructor-> CopyAssignment (from less to
	//Single-Argument Constructor создает из 'B' временный безымянный объект,
	//а оператор присваивания просто записывает его существующий объект 'B'  
#endif // CONVERSINS_FROM_OTHER_TO_CLASS

#ifdef CONVERSIONS_FROM_CLASS_TO_OTHER

	Fraction A(2, 3, 4);
	A.to_improper().print();
	int a = (int)A;
	cout << a << endl;

	double b = A;
	cout << b << endl;

#endif // CONVERSIONS_FROM_CLASS_TO_OTHER

#ifdef HAVE_A_NICE_DAY
	Fraction A = 3.333;     //Conversoin from 'double' to 'Fraction'
	cout << A << endl;
#endif // HAVE_A_NICE_DAY


} 