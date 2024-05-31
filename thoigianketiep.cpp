#include<iostream>
#include <algorithm>
#include<iomanip>
using namespace std;
int main(){
	long long h, m, k;
	cin >> h >> m >> k;
	long long tong = (784)*h + 28 * (m+k);
	if((tong/784)<28){
	cout << setfill('0') << setw(2) << tong/784 << "h" << ":";
	} else cout << setfill('0') << setw(2) << (tong/784)-((((tong/784)/28))*28) << "h" << ":";
	cout << setfill('0') << setw(2) << (tong%784)/28 << "m";
}
