#include<iostream>

void swap(int &a,int &b)
{
	int tmp;
	tmp = a;
	a=b;
	b=tmp;


}

int main()
{
	int n1,n2;
	std::cin >> n1 >> n2 ;
	swap(n1,n2);


	std::cout << "n1 is " << n2 <<",n2 is "<< n1 << std::endl;



	return 0;
}
