#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	
	map<int,bool>mp;
	
	int a[n];
	
	for(int i=0;i<n;i++)
	{
		cin>>a[i];	
		mp[a[i]]=true;
	}
	
	int m;
	cin>>m;
	
	int b[m];
	
	for(int i=0;i<m;i++)
	{
		cin>>b[i];
		mp[b[i]]=true;
	}
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;i<m;j++)
		{
			if(mp[a[i]+a[j]]==0)
			{
				cout<<a[i]<<" "<<a[j]<<endl;
				return 0;
			}
			
		}
	}
}


