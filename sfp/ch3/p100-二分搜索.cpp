#include<iostream>
#include<string>
#include<vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;

using std::vector;
int main()
{

	auto beg = text.begin(),end = text.end();
	atuo mid = beg +(end-beg)/2;

	while (mid != end && *mid != sought){
		if(sought < *mid)
			end = mid;
		else
			beg = mid +1;
		mid = beg + (end - beg)/2;
	}


	return 0;
}
