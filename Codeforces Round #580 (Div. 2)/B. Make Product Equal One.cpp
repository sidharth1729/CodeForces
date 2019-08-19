#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	
	int a[n];
	
	for(int i=0;i<n;i++)
	cin>>a[i];
	
	int minus,zero;
	minus=zero=0;
	
	long long sum=0;
	
	for(int i=0;i<n;i++)
	{
		if(a[i]<0)
		{
			sum += (-1-a[i]);
			minus++;
		}
		
		else if(!a[i])
		{
			zero++; 
		}
		
		else
		sum+=(a[i]-1);
	}
	
	
	if(minus%2==0 || zero)
	{
		cout<<(sum+zero)<<endl;
	}
	
		
	else
	{
		cout<<(sum + 2)<<endl;
	}
	
	
	
}
