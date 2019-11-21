#include<iostream>
#include<string>
#include<vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;

using std::vector;
int main()
{
	int a,b;
	float c;
	cin >> a >> b;
	if(b==0){
		cout <<"error!" <<endl;
		return -1;
	}
	c=(float)a/b;

	cout << c << endl;




	return 0;
}
