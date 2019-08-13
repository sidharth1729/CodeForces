#include<bits/stdc++.h>

using namespace std;

//map<int ,int>m;

#define l long long

int main()
{
	l n;
	cin>>n;
	
	l a[n];
	
	//int mini =0;
	
	for(l i=0;i<n;i++)
	cin>>a[i];
	
	l gcd = a[0];
	
	/*for(int i=0;i<n;i++)
	gcd = max(gcd,a[i]);
	*/
	for(l i=0;i<n;i++)
	gcd = __gcd(gcd,a[i]);
	
	l count=0;
	
	for(l i=1;i<=sqrt(gcd);i++)
	{
		if(gcd%i==0)
		{
			count+=2;
			
			if(i*i==gcd)
			count--;
		}
	}
	
	
	cout<<count<<endl;
}
