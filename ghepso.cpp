#include<iostream>
using namespace std;
int main(){
	long long k2, k3, k5, k6;
	cin >> k2 >> k3 >> k5 >> k6;
	long long k256 = min(min(k2, k5),min(k5, k6));
	long long k32 = min(k3, (k2-k256));
	cout << 32*k32 + 256*k256;
}
