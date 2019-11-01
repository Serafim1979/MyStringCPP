#include<iostream>
#include "MyString.h"

using std::cout;
using std::cin;
using std::endl;

int main()
{
	String a("Hello, world!");
	cout << "String a: \"";
	a.Print();
	cout << "\", Length = " << a.Len() << endl;

	String b = a;
	cout << "String b: \"";
	b.Print();
	cout << "\", Length = " << b.Len() << endl;

	b = a;
	cout << "String b: \"";
	b.Print();
	cout << "\", Length = " << b.Len() << endl;

	a += b;
	cout << "String a: \"";
	a.Print();
	cout << "\", Length = " << a.Len() << endl;

	a = a + b;
	cout << "String a: \"";
	a.Print();
	cout << "\", Length = " << a.Len() << endl;

	a = a + "Billy Bonce ";
	cout << "String a: \"";
	a.Print();
	cout << "\", Length = " << a.Len() << endl;

	a = "Billy Bonce " + b;
	cout << "String a: \"";
	a.Print();
	cout << "\", Length = " << a.Len() << endl;

	cout << (a == b) << endl;
	cout << (a != b) << endl;
	cout << (a > b) << endl;

	String* p = new String("Good bye!");
	cout << "String in heap: \"";
	p->Print();
	cout << "\", Length = " << p->Len() << endl;
	delete p;

	system("pause");
	return 0;
}