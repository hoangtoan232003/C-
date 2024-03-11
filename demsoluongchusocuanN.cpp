#include<iostream>
using namespace std;
int main(){
	long long n, dem=0;
	cin >> n;
	while(n!=0)
	{
		dem++;
		n /=10;
	}
	cout << dem++;
}
