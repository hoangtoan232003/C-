#include<iostream>
#include<cmath>
using namespace std;
int main(){
	long long a, b, c, d;
	cin >> a >> b >> c >> d;
	long long e = b/a;
	if(b%a == 0)
	{
		c = b*e;
		d = c*e;
		cout << "YES";
	}
	else cout << "NO";
}
