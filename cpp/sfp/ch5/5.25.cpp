#include<iostream>
#include<string>
#include<vector>
#include<stdlib.h>

using std::cin;
using std::cout;
using std::endl;
using std::string;

using std::vector;
using std::cerr;
int main()
{
	int a,b;
	float c;
	while(cin >> a >> b)
	{
		try{	
			if (b==0)
				throw b;
			else
				break;}
		catch(int)
		{
			cout <<"Error!\nTry again?(y/n):"<<endl;
			char d;
			cin >> d;
			if(!cin || c=='n')
				break;
		}
	}
//	cout<<"is over\n"<<endl;
	c=(float)a/b;

	cout << c << endl;

	return 0;
}
