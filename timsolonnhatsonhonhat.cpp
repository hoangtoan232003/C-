#include<iostream>
using namespace std;
int main(){
	long long a, b, c, d;
	cin >> a >> b >> c >> d;
	cout << max(max(a, b),max(c, d)) << " ";
	cout << min(min(a, b),min(c, d));
}
