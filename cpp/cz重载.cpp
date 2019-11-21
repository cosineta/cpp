#include<iostream>
#include<string>
#include<vector>

/*
using std::cin;
using std::cout;
using std::endl;
using std::string;

using std::vector;
*/
using namespace std;
int Max(int a,int b)
{
	cout << "the bigger in 2 int is: ";
	if(a>b)
		cout << a << endl;
	else
		cout << b << endl;

	return 0;
}

int Max(int a,int b,int c)
{
	int x;
	cout << "the max in 3 int is: ";
	if(a>b)
		x=a;
	else
		x=b;
	if(x<c)
		x=c;
	cout << x << endl;

	return 0;
}

int Max(double a,double b)
{
	cout << "the max in 2 double is: ";
	if(a>b)
		cout << a << endl;
	else
		cout << b << endl;

	return 0;
}


int main()
{

	Max(2,3);
	Max(4,5,6);
	Max(2.1,3.4);

	return 0;
}
