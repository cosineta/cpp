#include<iostream>
#include<string.h>

using namespace std;

class mystring
{
	public:
		mystring();
		mystring(const char *str);		
		mystring(const mystring& sour);
		mystring(unsigned int num,char c);
		mystring& operator=(const char *str);
		mystring& operator=(const mystring& sour);
		
		bool empty();
		int size();
		int compare(const char *str);
		int compare(const mystring& sour);
		void show();
	private:
		char* data;
		unsigned int length;
		unsigned int capacity;
};
/////////////////////////////构造函数
mystring::mystring()//创建一个空字符串
{
	data = new char[1];
	*data = '\0';
	length = 0;
	capacity = length;
}

mystring::mystring(const char *str)//根据C-字符串创建mystring
{
	length = strlen(str);
	data = new char[length+1];
	strcpy(data,str);
	capacity = length;
}

mystring::mystring(const mystring& sour)
{
	length = sour.length;
	data = new char[length+1];
	strcpy(data,sour.data);
	capacity = length;
}
mystring::mystring(unsigned int num,char c)
{
	length = num;
	data = new char[num+1];
	memset(data,c,num);
	*(data+num)='\0';
	capacity = length;
}
////////////////////////////////

mystring& mystring::operator=(const char *str)
{
	delete [] data;
	length = strlen(str);
	data = new char[length+1];
	strcpy(data,str);

	return *this;
}

mystring& mystring::operator=(const mystring& sour)
{
	if(this == &sour)
	{
		return *this;
	}
	length = sour.length;
	delete [] data;
	data = new char[length+1];
	strcpy(data,sour.data);
}

bool mystring::empty()
{
	if(length)
		return false;
	else
		return true;
}
int mystring::size()
{
	return length;
}
int mystring::compare(const char *str)
{
	return strcmp((*this).data,str);
}
int mystring::compare(const mystring& sour)
{
	return strcmp((*this).data,sour.data);

}

//////////////////////////////
void mystring::show()
{
	if((*this).empty())
		cout << "EMPTY" << endl;
	else
		cout << data <<",长度 is "<<size() << endl;
}

/////////////////////////////main
int main()
{
	mystring s1("233333");
	mystring s2;
	mystring s3(s1);
	mystring s4(5,'c');
	mystring s5="12345";
	mystring s6=s5;
	s1.show();
	s2.show();
	s3.show();
	s4.show();
	s5.show();
	s6.show();
	cout << s1.compare("233334")<< endl;
	cout << s5.compare(s6)<< endl;


	return 0;
}
