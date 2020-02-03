#include<iostream>
//#include<string>
//#include<vector>

using namespace std;

class Mystring
{
	public:
		Mystring();
		
		void show();
	private:
		char* data;
		unsigned int length;
}
/////////////////////////////构造函数
Mystring::Mystring()//创建一个空字符串
{
	data = new char[1];
	*data = '\0';
	length = 0;
}
Mystring::Mystring(char *str)//根据C-字符串创建mystring
{
	int length = strlen(str)+1;
	data = new char[length];
	strcpy(data,str);
}


void Mystring::show()
{
	cout << data << endl;
}


int main()
{
	class Mystring
{
	public:
		Mystring();
		
		void show();
	private:
		char* data;
		unsigned int length;
}


	Mystring s1("233333");
	Mystring s2;
	s1.show();
	s2.show();

	return 0;
}
