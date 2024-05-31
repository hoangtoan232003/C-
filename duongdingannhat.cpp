#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int d1, d2, d3, d4;
	cin >> d1 >> d2 >> d3 >> d4;
	long long a = d1+d3;
	long long b = d2+d3;
	long long c = 2*d1+2*d2;
	cout << min(a, b, c);
}
