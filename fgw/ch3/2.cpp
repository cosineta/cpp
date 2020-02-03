#include <iostream>
#include <string>
using namespace std;
class Base {
public:
	int k;
	Base(int n):k(n) { printf("what?\n");}
};

class Big
{
public:
	int v;
	Base b;
	void tt();
	void tt(){printf ("23333\n");}
	Big(int x):v(x),b(x) {} 
	
	// 在此处补充你的代码 
};


int main()
{
	int n;
	while(cin >>n) {
		Big a1(n);
		Big a2 = a1;
		cout << a1.v << "," << a1.b.k << endl;
		cout << a2.v << "," << a2.b.k << endl;
	}
}
