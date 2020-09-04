
#include <bits/stdc++.h>
using namespace std;

//checking palindrome

void check_palindrome(string *str1)
{  
    string copy=*str1;
    string copyi=*str1;
    int count=0;
	char lastchar=0;
	vector<char>v;

	for (int i=0;i<copyi.size();i++)
	{
	    lastchar=copy.back();
	    copy.pop_back();
		v.push_back(lastchar);
	}
	
	for(int j=0;j<copyi.size();j++)
	{
	  
	
	char check =copyi[j];

		if(check==v[j])
		{
			count++;
			continue;
		}
		else
		break;
	}
	
	
	
	if(count==copyi.size())
	cout<<"palindrome";
	else
	cout<<"notpaindrome";
}
int main()
{
	string str;
	getline(cin,str);
	check_palindrome(&str);
	return 0;
}
