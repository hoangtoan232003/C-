#include<iostream>
using namespace std;
int main(){
	long long n, u1, d;
	cin >> n >> u1 >> d;
	long long u = u1 + (n-1)*d;
	long long tong = (n*(u1+u))/2;
	cout << tong;
}
