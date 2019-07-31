#include<bits/stdc++.h>

using namespace std;


int main()
{
	double l,h;
	cin>>l>>h;
	
	std::cout << std::fixed;
    std::cout << std::setprecision(13);
	
	double result = (h*h - l*l)/(2*l);
	
	cout<<result<<endl;
}
