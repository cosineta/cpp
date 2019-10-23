#include<iostream>
#include<string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	const string hexxx = "0123456789ABCDEF";
	string result;
	string::size_type n;
	while (cin >> n)
		if(n < hexxx.size())
			result =result+" "+ hexxx[n];
	cout << result << endl;




	return 0;
}
