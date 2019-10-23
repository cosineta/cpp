#include<iostream>
int n = 4;
int & SetValue()
{
	return n;
}
int main()
{
	SetValue()=40;
	std::cout << n << std::endl;
	return 0;

}
