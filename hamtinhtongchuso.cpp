#include<iostream>
using namespace std;
int sum_digit(long long n){
	long long tong=0;
	while(n>0){
	tong += n%10;
	n/=10;
	}
	return tong;
}
int main(){
    long long a; cin >> a;
    cout << sum_digit(a) << endl;
    return 0;
}
