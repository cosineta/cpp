#include<iostream>
int main()
{
	int ival = 1024;
	int &refVal = ival;	//给ival取另一个名字:refVal
//	int &refVal2;		//错误！引用必须初始化(定义+赋值)！
	
	refVal = 2;			//此时ival也为2
	int ii = refVal;	//赋值行为，==int ii = ival
	
	int &refVal3 = refVal;
	int i = refVal;
	//【引用】是给对象起一个新名字，≈镜像，是绑定的，不能独立操作或改变

	return 0;
}
