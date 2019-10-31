#include<iostream>
#include<string>
#include<vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;

using std::vector;

int tt()
{
	static int x = 0;
	if(x)
		return x;
	return x++;
}


int main()
{
	int i = 5;
	while(i!=0)
	{
		cout << tt() <<endl;
		i--;
	}

	return 0;
}
