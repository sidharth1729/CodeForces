#include<bits/stdc++.h>

using namespace std;

void fun(int a[],int k,int n)
{
	int count=0;
	
	for(int i=0;i<n;i++)
	count+=a[i]%2;
	
	//cout<<count<<endl;
	
	if(count>=k && (count-k)%2==0)
	{
		cout<<"YES"<<endl;
		int i=0;
		while(k!=1)
		{
			if(a[i]%2)
			{
				cout<<(i+1)<<" ";
				k--;
			}
			
			i++;
		}
		
		cout<<n<<endl;
		return ;
	}
	
	
	
	cout<<"NO"<<endl;
}

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		
		int a[n];
		
		for(int i=0;i<n;i++)
		cin>>a[i];
		
		fun(a,k,n);
	}
}
