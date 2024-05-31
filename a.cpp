#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	long long d1, d2, d3;
	cin >> d1 >> d2 >> d3;
	long long a = 2*(d1+d3);
	long long b = 2*(d2+d3);
	long long c = d1+d2+d3;
	long long d = 2*(d1+d2);
	cout << min(min(a, b),min(c,d));
}
