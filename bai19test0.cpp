#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main(){
	double x;
	cin >> x;
	cout << (int)x << endl;
	
	cout << fixed << setprecision(2) << x-(int)x;
} 
