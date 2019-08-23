#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		int b,p,f;
		cin>>b>>p>>f;
		
		b/=2;
		
		int h,c;
		cin>>h>>c;
		
		int sum=0;
		
		if(h>c)
		{
			int temp = min(b,p);
			
			sum = (temp)*h + (min((b-temp),f)*c);
		}
		
		else
		{
			int temp = min(b,f);
			
			sum = (temp)*c + min((b-temp),p)*h;
		}
		
		cout<<sum<<endl;
	}
}
