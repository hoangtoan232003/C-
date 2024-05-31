#include<iostream>
#include<cmath>
using namespace std;
bool sochinhphuong(long long n){
	long long can = sqrt(n);
	if(can * can ==n) return true;
	return false;
}
int main(){
	long long n;
	cin >> n;
	if(sochinhphuong(n)) cout << "YES";
	else cout << "NO";
	return 0;
}
