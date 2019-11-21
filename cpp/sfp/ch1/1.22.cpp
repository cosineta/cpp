#include<iostream>
#include"Sales_item.h"
int main()
{
	Sales_item newitem,sumitem;

	std::cin >> sumitem;
	while(std::cin >> newitem)
		if(newitem.isbn()==sumitem.isbn())
			sumitem+=newitem;
		else
		{
			std::cout<<"their isbn are different\n"<<std::endl;	
			return -1;
		}
			
	std::cout << sumitem <<std::endl;


	return 0;
}
