#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s,t;
    cin>>s>>t;
    
    pair<int ,int> dp[t.length()];
    
    for(int i=0;i<t.length();i++)
    dp[i]={0,0};
    
    int len = 0;
    
    for(int i=0;len<t.length();i++)
    {
        if(t[len] == s[i])
        {
            dp[len].first = i+1;
            len++;
            
    	}
    }
    
    len = t.length()-1;
    
    for(int i=s.length()-1; len>=0;i--)
    {
    	if(t[len]==s[i])
    	{
    		dp[len].second = i+1;
    		len--;
		}
	}
	
	
	int maxi = 0;
	
	maxi = max(maxi , dp[0].second - 1 );
	
	len = s.length();
	
	for(int i=1;i<t.length();i++)
	{
		maxi = max(maxi , dp[i].second - dp[i-1].first -1 );
	}
	
    maxi = max(maxi, len - dp[t.length()-1].first );
    
    //maxi = max(maxi,s.length() - dp[t[t.length()-1]-'a'].first-1);
    
    cout<<maxi<<endl;
    
    
}
