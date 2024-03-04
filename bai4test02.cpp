#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main(){
	double r;
	double PI = 3.14;
	cin >> r;
	cout << fixed << setprecision(4) << 2*PI*r << " " << PI*r*r;
}

