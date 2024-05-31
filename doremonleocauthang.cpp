#include<iostream>
#include<cmath>
using namespace std;
int main(){
	long long n, m;
	cin >> n >> m;
	int x = (n/2) + (n%2); long long y = n;
	long long c = (x+m-1)/m*m;
	if(c <= y)
	{
		cout << c;
	}
	else cout << -1;
	return 0;
}
