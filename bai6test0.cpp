#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int a, b, c;
	double x;
	cin >> x;
	a = floor(x);
	b = ceil(x);
	c = round(x);
	cout << a << endl << b << endl << c;
}
