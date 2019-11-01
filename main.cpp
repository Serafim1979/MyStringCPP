#include<iostream>
#include<fstream>
#include "MyString.h"

using std::cout;
using std::cin;
using std::endl;
using std::ofstream;

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

	a[0] = 'h';
	a[24] = '@';

	cout << "String a: \"";
	a.Print();
	cout << "\", Length = " << a.Len() << endl;

	String* p = new String("Good bye!");
	cout << "String in heap: \"";
	p->Print();
	cout << "\", Length = " << p->Len() << endl;

	cout << "Test << :" << a << endl;

	cout << "Enter your name: ";
	cin >> a;
	cout << "Hello, " << a << endl;

	ofstream file;
	file.open("test.txt");
	file << b << endl << a << endl;
	file.close();

	delete p;

	system("pause");
	return 0;
}