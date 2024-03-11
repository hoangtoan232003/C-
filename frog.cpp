#include<iostream>
using namespace std;
int main(){
	long long a, b, k;
	cin >> a >> b >> k;
	if(k%2==0)
	{
		cout << (a-b)*k/2;
	} else cout << a*k/2-(k-1)/2*b;
}
