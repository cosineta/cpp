#include<iostream>
#include<string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	string r1;
	string r2;

	cout << "第一行：" << endl;
	getline(cin,r1);
	cout << "第二行：" << endl;
	getline(cin,r2);

	if(r1>r2)
		cout << "更大的是：" << r1 ;
	else if(r1<r2)
		cout << "更大的是：" << r2 ;
	else
		cout << "两个一毛一样";
	cout << endl;


	if(r1.size()>r2.size())
		cout << "更长的是：" << r1 ;
	else if(r1.size()<r2.size())
		cout << "更长的是：" << r2 ;
	else
		cout << "两个一毛一样长";
	cout << endl;




	return 0;
}
