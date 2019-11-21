#include<iostream>
#include<cmath>
using namespace std;
/*
	提示：By:weizu_cool
	不妨采用break跳出循环控制，找到后输出;或者直接输出，再break; 
	我们需要使用sqrt函数，导入<cmath>
	double sqrt(double);   该函数返回参数的平方根。 
*/
 
int find(int n){
	int count=0;
	long num =0, x = 0, y = 0;
	while(1){
		num++;
		x = sqrt(num+100);
		y = sqrt(num+268);   //注意：这里不要想当然的定义x,y为double来存储，因为我们后面的if条件判断就是基于整型变量的
							//截取整数部分来进行，从而得出的判断。double的话，每次都相等了，判断就失去了意义。 
		if(x*x==num+100 && y*y==num+268){
			cout<<"num="<<num<<endl;
			count++;
			if(count==n)
				break; 
		} 
	}
	return 0;
} 

int main(void){
	
	int n = 3;//这里n是希望找到的满足条件的数的个数 ，实际上经过测试好像也只有三个
	find(n);
	return 0;
}
