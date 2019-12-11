#include <iostream>
using namespace std;
class A {
public:
	int val;

	A(int x=123):val(x){}
	
	A&GetObj(){
		return *this;
	}
};


int main()
{
	int m,n;
	A a;
	cout << a.val << endl;	//a.val=123
	while(cin >> m >> n) {	
		a.GetObj() = m;		//val=m
		cout << a.val << endl;
		a.GetObj() = A(n);	//val=n
		cout << a.val<< endl;
	}
	return 0;
}
