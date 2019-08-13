#include<bits/stdc++.h>

using namespace std;

bool fun(int a[],int n)
{
	int one,minus;
	
	one = minus = 0;
	
	bool flag=false;
	
	for(int i=1;i<n;i++)
	{
		if(abs(a[i]-a[i-1])==1)
		{
			if(a[i]-a[i-1]==1)
			one++;
			
			else
			minus++;
			
			if(one && minus)
			return false;
		}
		
		else
		{
			if(flag==false)
			{
				flag=true;
			}
			
			else
			return false;
		}
	}
	
	return true;
}

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		int n;
		cin>>n;
		
		int a[n];
		
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		
		
		if(fun(a,n))
		{
			cout<<"YES"<<endl;
		}
		
		else
		cout<<"NO"<<endl;
	}
}
