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

	vector<string> ss;
	string snew;
	while(cin >> snew){
		ss.push_back(snew);
	}

	for(unsigned i=0;i<ss.size();i++)
	{
		unsigned j =0;
		cout << ss[i] << " ==> ";
		for(auto c :ss[i]){
			ss[i][j]=toupper(c);
			j++;
	}
		cout << ss[i] << endl;
	}

	return 0;
}
