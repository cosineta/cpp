#include<iostream>
#include<string>
#include<cctype>
#include<vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;

using std::vector;
int main()
{

	string s;
	getline(cin , s);

	for(auto i=s.begin();i!=s.end();i++)
	{
		*i = toupper(*i);
	}
	cout << s << endl;
	

	return 0;
}
