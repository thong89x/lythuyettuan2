#include<iostream>
#include <cstring>

using namespace std;

class MyString {
private:
	char* ch;
	int _length;
public:
	MyString();
	friend istream& operator>>(istream& inDev, MyString& a);
	int length();
	//const int& getLength()const;
	friend ostream& operator<<(ostream& outDev, MyString& a);
	char* subString(int beg, int k);
	char* operator+(const MyString& b);
	MyString operator+(const char* b);
};
