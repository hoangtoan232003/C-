#include<iostream>
#include <cmath>
#include <cstdio>
#include <vector>
using namespace std;
int main(){
	long long n, sum=0, sum2=0, sum3=0, sum4=0;
	cin >> n;
	for(int i=1; i<=n; i++)
	{
		sum += i;
		sum2 +=(i*i);
		if(i%3 ==0)
		{
			sum3 ++;
			sum4 +=i;
		}
	}
	cout << sum << endl << sum2 << endl << sum3 << endl << sum4;
}
