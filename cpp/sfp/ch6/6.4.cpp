#include<iostream>
#include<string>
#include<vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;

using std::vector;

int fact (void);
int fact()
{
	int x=1;
	int n;
	cin >> n ;
	cout << n << "! is ";
	while (n>1)
		x*=n--;
	
	return x;
}

int main()
{
	int ans = fact();

	cout << ans <<endl;


	return 0;
}
