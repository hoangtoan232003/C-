#include<iostream>
using namespace std;
int main(){
	int a, b, c, d, e, f;
	cin >> a >> b >> c;
	d = min(a, min(b,c));
	e =  max(a, max(b,c));
	f = (a+b+c)-d-e;
	cout << d << " " << f << " " << e;
}
