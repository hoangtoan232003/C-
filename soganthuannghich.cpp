#include<bits/stdc++.h>
using namespace std;

bool tn(long long n){
	long long sum =0, m =n;
	while(n){
		sum = sum * 10 + n % 10;
		n/=10;
	}
	return m == sum;
}

bool check(long long n){
	int cuoi = n%10;
	n/=10;
	long long sum =0;
	while(n>=10){
		sum = sum * 10 + n %10;
		n/=10;
	}
	return ((cuoi ==(2*n) || n ==(2*cuoi)) && tn(sum));
}
int main(){
	long long n;
	cin >> n;
	if(check(n)) cout << "YES";
	else cout << "NO";
	return 0;
}
