#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n;
	int ans=0, max=0, res = 0, vl=0;
	cin >> n;
	while(n%2 ==0)
	{
		ans++;
		n/=2;
	}
	if(ans > max)
	{
		max = ans;
		res = 2;
	}
	for(int i=3;i<=sqrt(n);i+=2)
	{
		vl=0;
		while(n%i==0)
		{
			vl++;
			n/=i;
		}
		if(vl > max)
		{
			max = vl;
			res = i;
		}
	}
	if(n>2 && max < 1)
	{
		max =1;
		res =n;
	}
	cout << res << " " << max;
}
