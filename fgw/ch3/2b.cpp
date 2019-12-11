#include <iostream>
#include <string>
using namespace std;
class Base {
public:
	int k;
	Base(int n):k(n) { }
};
/*
class Big
{
public:
	int v;
	Base b;
	Big(int x):v(x)  {  }	
	
	// 在此处补充你的代码 
};
*/

int main()
{
	int n;
	while(cin >>n) {
		Base a1(n);
		cout << a1.k << "," << endl;
//		cout << a2.v << "," << a2.b.k << endl;
	}
}
