#include<bits/stdc++.h>

using namespace std;

int a[1000][1000];

#define Safe(i,j,row,col)  visited[i][j]

bool isSafe(int i,int j,int row,int col)
{
	if(i>=row || j>=col || i<0 || j<0)
	return false;
	
	if(a[i][j])
	return true;
	
	return false;
}

bool ans(int row,int col)
{
	bool flag=true;
	
	int arr1[]={1,1,-1,-1};
	int arr2[]={1,-1,1,-1};
	
	bool visited[row][col];
	
	memset(visited,false,sizeof(visited));
	
	vector<pair<int,int> >v;
	
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			if(a[i][j])
			{
				//flag=false;
				/*for(int k=0;k<1;k++)
				{
					flag|= (isSafe(i+arr1[k],j,row,col) && isSafe(i,j+arr2[k],row,col) && isSafe(i + arr1[k] , j+ arr2[k],row,col) );
					
					if(isSafe(i+arr1[k],j,row,col) && isSafe(i,j+arr2[k],row,col) && isSafe(i + arr1[k] , j+ arr2[k],row,col) )
					{
						
						if(Safe(i+arr1[k],j,row,col)==false || Safe(i,j+arr2[k],row,col)==false || Safe(i + arr1[k] , j+ arr2[k],row,col)==false)
						{
							v.push_back({i+1,j+1});
						}
						
						Safe(i+arr1[k],j,row,col) = Safe(i,j+arr2[k],row,col) = Safe(i + arr1[k] , j+ arr2[k],row,col)=true;
						
					}										
					
				}
				*/
				
				if(isSafe(i+1,j,row,col) && isSafe(i,j+1,row,col) && isSafe(i + 1, j+1,row,col))
				{
					if(Safe(i+1,j,row,col)==false || Safe(i,j+1,row,col)==false || Safe(i + 1, j+1,row,col)==false)
					{
						visited[i][j]=visited[i+1][j]=visited[i][j+1]=visited[i+1][j+1]=true;
						v.push_back({i+1,j+1});
					}
	
				}
				
				if(visited[i][j]==false)
				return false;
				
			}
		}
	}
	
	
	cout<<v.size()<<endl;
	
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i].first<<" "<<v[i].second<<endl;
	}
	
	return true;
}

int main()
{
	int row,col;
	
	cin>>row>>col;
	
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		cin>>a[i][j];
	}
	
	if(ans(row,col)==false)
	cout<<-1<<endl;
	
	
}
