#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
	int n,x,y;
	cin>>n>>x>>y;
	
	int a[n];
	
	for(int i=0;i<n;i++)
	cin>>a[i];
	
	multiset<int>m;
	
	multiset<int>::iterator it = m.begin();
	
	int result=1;
	
	for(int i=0;i<y && i<n;i++)
	{
		m.insert(a[i]);
	}
	
	for(int i=0;i<n;i++)
	{
		if(i+y<n)
		{
			m.insert(a[i+y]);
		}
		
		if(i>x)
		{
			m.erase(a[i-x-1]);
		}
		
		it = m.begin();
		if(*it==a[i])
		{
			result=i+1;
			break;
		}
	}
	
	cout<<result<<endl;
}
