#include"MyString.h"
#define loop(x,beg,end) for(int x=beg;x<end;x++)
MyString::MyString() {
	ch = (char*)"";
	_length = 0;
}

/*const int& MyString::getLength()const {
	
};*/

istream& operator>>(istream& inDev, MyString& a)
{
	char* c = new char[225];
	inDev.getline(c,224);	
	a.ch = c;
	a._length = strlen(c);
	return inDev;
}

int MyString::length() {
	this->_length = strlen(this->ch);
	return this->_length;
}

ostream& operator<<(ostream& outDev, MyString& a)
{
	outDev << a.ch << endl;
	return outDev;
}

char* MyString::subString(int beg, int k) {
	if (beg > this->_length)
		return (char*)"\0";
	if (beg < 0 || k < 0)
		return (char*)"\0";
	if ((beg + k) > this->_length)
		k = this->_length - beg;
	char* temp = new char[k + 1];
	temp[k] = '\0';
	int count = 0;
	loop(i,beg,beg+k)
	{
		temp[count++] = this->ch[i];
	}
	return temp;
}

char* MyString::operator+(const MyString& b)
{
	int n = this->_length + b._length ;
	char* c = new char[n];
	loop(i, 0, n)
	{
		if (i < length())
			c[i] = ch[i];
		else
			c[i] = b.ch[i - length()];
	}
	c[n] = '\0';
	return c;
}

MyString MyString::operator+(const char* b){
	MyString newString;
	int size = strlen(b) + this->_length;
	newString.ch = new char[size];
	for (int i = 0; i < this->_length; i++) newString.ch[i] = this->ch[i];
	for (int i = this->_length; i < size; i++) newString.ch[i] = b[i - this->_length];
	newString.ch[size] = '\0';
	return newString;
}

