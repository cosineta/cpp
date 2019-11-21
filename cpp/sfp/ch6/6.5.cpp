#include<iostream>
#include<string>
#include<vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;

using std::vector;

//int fact (void);
int fact(int n)
{
	if (n<0)
		n=-n;
	return n;
}

int main()
{
	int num;
	cin >> num;
	cout <<num <<"\'s absolute is ";
	int ans = fact(num);
	cout << ans <<endl;


	return 0;
}
