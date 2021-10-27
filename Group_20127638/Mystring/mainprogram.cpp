#include"MyString.h"

int main() {
	MyString ch1, ch2;
	cout << "Nhap chuoi 1: ";
	cin >> ch1;
	cout<<"Inputed string is: " << ch1 << endl;

	cout << "Nhap chuoi 2: ";
	cin >> ch2;
	cout << "Inputed string is: "<< ch2 << endl;
	MyString ch3;
	ch3 = ch1 + " ";
	cout<<ch1 + " "<<endl;
	cout<< ch3 + ch2;
	system("pause");
	return 0;
}