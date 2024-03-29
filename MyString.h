#ifndef MYSTRING_H
#define MYSTRING_H

class String
{
private:
	char* s;
	int n;
public:
	friend std::ostream& operator << (std::ostream &, const String &);
	const char& operator [](int)const;
	char& operator [](int);
	friend bool operator == (const String&, const String&);
	friend bool operator > (const String& lhs, const String& rhs);
	String& operator += (const String&);
	String& operator = (const String&);
	String(const String&);
	String(const char* str="");
	~String();

	int Len()const
	{
		return n;
	}
	void Print()const;
};

String operator + (const String&, const String&);
bool operator != (const String& lhs, const String& rhs);
bool operator <= (const String& lhs, const String& rhs);
bool operator >= (const String& lhs, const String& rhs);
bool operator < (const String& lhs, const String& rhs);

std::istream& operator >> (std::istream&, String&);

#endif // !MYSTRING_H
