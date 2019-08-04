#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		long long sum=0;
		
		long long temp;
		
		for(int i=0;i<3;i++)
		{
			cin>>temp;
			sum+=temp;
		}
		
		sum/=2;
		
		cout<<sum<<endl;
	}
}
