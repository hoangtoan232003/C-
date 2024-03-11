#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main(){
	int r;
	double PI = 3.14;
	cin >> r;
	cout << fixed << setprecision(4) << 2*PI*r << " " << PI*r*r;
}
