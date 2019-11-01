#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstring>
#include "MyString.h"

using std::cout;
using std::cin;
using std::endl;
/////////////////////////////////////////
const char& String::operator [](int ind)const
{

}
/////////////////////////////////////////
char& String::operator [](int ind)
{

}
/////////////////////////////////////////
bool operator > (const String& lhs, const String& rhs)
{
	return strcmp(lhs.s, rhs.s) > 0;
}
/////////////////////////////////////////
bool operator <= (const String& lhs, const String& rhs)
{
	return !(lhs > rhs);
}
/////////////////////////////////////////
bool operator >= (const String& lhs, const String& rhs)
{
	return !(lhs < rhs);
}
/////////////////////////////////////////
bool operator < (const String& lhs, const String& rhs)
{
	return rhs > lhs;
}
/////////////////////////////////////////
bool operator != (const String& lhs, const String& rhs)
{
	return !(lhs == rhs);
}
/////////////////////////////////////////
bool operator == (const String& lhs, const String& rhs)
{
	return lhs.n == rhs.n && strcmp(lhs.s, rhs.s) == 0;
}
/////////////////////////////////////////
String operator + (const String& lhs, const String& rhs)
{
	String t = lhs;
	return t += rhs;
}
/////////////////////////////////////////
String& String::operator += (const String& str)
{
	char* t = new char[n + str.n + 1];
	strcpy(t, s);
	strcat(t, str.s);
	delete[] s;
	s = t;
	n += str.n;
	return *this;
}
/////////////////////////////////////////
String& String::operator = (const String& str)
{
	if (this == &str)
		return *this;
	delete[] s;
	n = str.n;
	s = new char[n + 1];
	strcpy(s, str.s);
	return *this;
}
/////////////////////////////////////////
String::String(const String &str)
{
	n = str.n;
	s = new char[n + 1];
	strcpy(s, str.s);
}
/////////////////////////////////////////
String::String(const char* str)
{
	n = strlen(str);
	s = new char[n+1];
	strcpy(s, str);
}
/////////////////////////////////////////
String::~String()
{
	delete[] s;
}
/////////////////////////////////////////
void String::Print()const
{
	cout << s;
}
/////////////////////////////////////////