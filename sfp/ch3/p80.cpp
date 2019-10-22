#include<iostream>
#include<string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{

	string str = "Hello";
	string phrase = "Hello World";
	string slang = "Hiya";//我大，means我的ascii值大

	if(str>slang)
		cout << str ;
	else
		cout << slang ;
	cout << endl;



	return 0;
}
