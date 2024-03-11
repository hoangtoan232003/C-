#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main(){
	int a, b;
	cin >> a >> b;
	cout << a+b << endl << a-b << endl << (long long)a*b << endl;
	if(b!=0){
	
	cout << fixed << setprecision(4) << (double)a/b;
} else cout << "INVALID";
}
