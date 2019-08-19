#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	
	if(n%2==0)
	{
		cout<<"NO"<<endl;
		return 0;
	}
	
	
	cout<<"YES"<<endl;
	
	
	int a[n*2];
	
	
	int j=0;
	
	for(int i=0;i<n;i++)
	{
		if(i%2)
		{
			j+=3;
		}
		
		else
		{
			j+=1;
		}
		
		cout<<j<<" ";
	}
	
	cout<<2<<" ";
	
	j=2;
	
	for(int i=0;i<n-1;i++)
	{
		if(i%2)
		{
			j+=3;
		}
		
		else
		{
			j+=1;
		}
		
		cout<<j<<" ";
	}
	
	cout<<endl;
}
