#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main(){
	int N;
	cin >> N;
	cout << fixed << setprecision(2) << sqrt(N) << endl;
	cout << fixed << setprecision(3) << cbrt(N);
	return 0;
}
