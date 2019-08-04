#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,m;
	cin>>n>>m;
	
	char a[n][m];
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		cin>>a[i][j];
	}
	
	int score[m];
	
	for(int i=0;i<m;i++)
	cin>>score[i];
	
	int result=0;
	
	for(int i=0;i<m;i++)
	{
		int count[5];
		memset(count,0,sizeof(count));
		
		for(int j=0;j<n;j++)
		{
			count[a[j][i]-'A']++;
		}
		
		int maxi=0;
		
		for(int k=0;k<5;k++)
		{
			maxi = max(count[k],maxi);
		}
		
		result += maxi*score[i]; 
	}
	
	cout<<result<<endl;
	
	
}
