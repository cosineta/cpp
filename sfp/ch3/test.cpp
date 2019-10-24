#include<iostream>
#include<string>
#include<vector>
#include <typeinfo>
using std::cin;
using std::cout;
using std::endl;
using std::string;

using std::vector;
int main()
{
	int a = 5;

//	auto x =typeid(a);
	cout << typeid(a).name() <<endl;

	return 0;
}
