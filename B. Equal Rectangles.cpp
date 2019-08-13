#include<bits/stdc++.h>

using namespace std;

bool fun(int a[],int n)
{
	map<int ,int>m;
	
	for(int i=0;i<n*4;i++)
	{
		m[a[i]]++;
	}
	
	map<int ,int> :: iterator i = m.begin();
	
	int sum=0;
	
	vector<int>v;
	
	while(i!=m.end())
	{
		if(i->second%2)
		return false;
		
		sum += i->second;
		
		for(int j=0;j<i->second/2;j++)
		v.push_back(i->first);
		
		i++;
	}
	
	if(sum/4!=n)
	return false;
	
	sort(v.begin(),v.end());
	//delete i;
	
	int i1=1,j=v.size()-2;
	
	sum = v[0]*v[v.size()-1];
	
	while(i1<j)
	{
		if(v[i1++]*v[j--]!=sum)
		return false;
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
		
		
		int a[4*n];
		
		map<int ,int>m;
		
		for(int i=0;i<n*4;i++)
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
