#include<iostream>
#include<string>
#include<vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;

using std::vector;

/*

class Complex{

	private:
		double real,imag;
	public:
		void Set(double r ,double i);

};

Complex c1;//调用默认构造函数
Complex * pc = new Complex;//同上
*/
//如果在类后面自己编写构造函数的话：
class Complex{
	private:
		double real,imag;
	public:
		void Set(double r ,double i=1);//第二个参数可缺省

};

Complex::Complex(double r,double i)
{
	real = r;
	imag = i;
}
//这时：
Complex c1;//缺少参数
Complex * pc = new Complex;//缺少参数
Complex c1(2);//可以
Complex c1(2,4),c2(3,5);//可以
Complex * pc = new Complex(3,4);//new 动态初始化～

int main()
{

	return 0;
}

