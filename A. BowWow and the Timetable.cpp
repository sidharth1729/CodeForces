#include<bits/stdc++.h>

using namespace std;

int main()
{
	string s;
	cin>>s;
	
	int len = s.length();
	
	if(len%2==0)
	{
		cout<<(len/2)<<endl;
	}
	
	
	else
	{
		int temp  = len/2;
		
		for(int i=1;i<s.length();i++)
		{
			if(s[i]-48)
			{
				temp++;
				break;
			}
		}
		
		
		cout<<temp<<endl;
	}
}
