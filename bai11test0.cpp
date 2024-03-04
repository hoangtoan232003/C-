#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main(){
	int n;
	cin >> n;
	cout << 2*n << endl << endl << (long long)10*n << endl << endl << n/2 << endl << endl;
	cout << fixed << setprecision(3) << (double)n/2;
	return 0;
}
