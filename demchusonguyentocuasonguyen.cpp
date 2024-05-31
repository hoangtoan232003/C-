#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n, ans,sum=0;
	cin >> n;
	while(n>0)
	{
		ans =n%10;
		if(ans==2 || ans ==3 || ans==5 || ans==7)
		{
			sum++;
		}
		n/=10;
	}
	cout << sum;
}
