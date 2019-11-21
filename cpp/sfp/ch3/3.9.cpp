#include<iostream>
#include<string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	string s;
	
	getline(cin,s);
	cout << s <<"and"<<s[0]<<",\nover" <<endl;


	return 0;
}
