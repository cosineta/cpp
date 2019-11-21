#include<iostream>
int main()
{
	int s,e;
	
	std::cout<<"enter the start , and the end" << std::endl;
	std::cin>>s>>e;
	while(s<=e)
	{
		std::cout<<s<<",";
		s++;
	}

	std::cout<<"\nover"<<std::endl;


	return 0;
}
