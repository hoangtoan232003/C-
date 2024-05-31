#include<bits/stdc++.h>
using namespace std;
bool check(int n){
	for(int i=2;i<=sqrt(n);i++)
	{
		while(n%i==0)
		{
			int e=0;
			while(n%i==0)
			{
				e++;
				n/=i;
			}
			if(e>=2) return 1;
		}
	}
	return 0;
}
int main(){
	int a, b; cin >> a >> b;
	for(int i=a;i<=b;i++)
	{
		if(check(i)) cout << i << " ";
	}
	return 0;
}
