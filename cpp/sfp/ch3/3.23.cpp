#include<iostream>
#include<string>
#include<cctype>
#include<vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;

using std::vector;
int main()
{

	vector<int> nums;
	int n;
	for(int i = 0;i!=5;++i)
	{
		cin >> n;
		nums.push_back(n);
	}

	vector<int>::iterator it=nums.begin();

	while(it!=nums.end())
	{
	
		(*it)*=2;
		++it;

	}

	
	
	/*for(auto i=s.begin();i!=s.end();i++)
	{
		*i = toupper(*i);
	}
	cout << s << endl;
	*/

	for(int i = 0;i!=5;i++)
		cout << nums[i]<<endl;

	return 0;
}
