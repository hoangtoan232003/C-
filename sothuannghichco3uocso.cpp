#include<iostream>
#include<cmath>
using namespace std;

bool check(int n)
{
	int tmp = n, sum=0;
	while(n)
	{
		sum = sum * 10 + n % 10;
		n/=10;
	}
	return tmp == sum;
}

bool usnt(int n)
{
	int res = 0;
	for(int i = 2;i <= sqrt(n); i++)
	{
		if(n%i == 0)
		{
			res++;
			while(n%i == 0)
			{
				n/=i;
			}
		}
	}
	if(n!=1) res ++;
	return res >=3;
}

int main(){
	int a, b;
	int found = 0;
	cin >> a >> b;
	for(int i = a;i <= b; i++)
	{
		if(check(i) && usnt(i)) 
		{
			cout << i << " ";
			found = 1;
		}
	}
	if(found != 1) cout << "-1";
	return 0;
}
