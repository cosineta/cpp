#include<iostream>
#include<string>
#include<vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;

using std::vector;

class A
{
	int i;
public:
	void Hello(){
		cout << "hello\n" << endl;
	}
	//void Hello(A * this){cout << "hello" << endl;}
	
};

int main()
{

	A * p = NULL;
	p->Hello();
	//Hello(p);
	return 0;
}
