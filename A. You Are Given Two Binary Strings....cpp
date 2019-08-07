#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		string s1,s2;
		cin>>s1>>s2;
		
		int i;
		int count=0;
		for(i=s2.length()-1;i>=0;i--)
		{
			if(s2[i]=='1')
			break;
			
			count++;
		}
		//cout<<"i"<<i<<endl;
		//int index=i;
		int count1=0;
		for(i  = s1.length()-1 -count  ;i>=0;i--)
		{
			if(s1[i]=='1')
			break;
			
			count1++;	
		}
		
		cout<<(count1)<<endl;
	}
}
