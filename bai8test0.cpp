#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main(){
	int a, b;
	cin >> a >> b;
	double c = (double)b / a; 
	cout << b/a << endl; 
	cout << fixed << setprecision(2) << c;
	return 0;
}
