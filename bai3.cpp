#include<iostream>
using namespace std;
int main(){
	long long X, Y, Z, T;
	cin >> X >> Y >> Z >> T;
	cout << Y << "," << Z << "," << X << "," << T << endl;
	long long tong = X + Y + Z + T;
	cout << tong << endl;
	long long bieuthuc = X - Y + Z * T;
	cout << bieuthuc << endl;
	}
