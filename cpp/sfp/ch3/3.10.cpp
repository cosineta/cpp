#include<iostream>
#include<string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	string s ;
	string result;
	string::size_type n;
	
	getline(cin,s);
	for(auto c :s)
		if(ispunct(c))
			result =result+" ";
		else
			result +=c;

	cout << result << endl;




	return 0;
}
