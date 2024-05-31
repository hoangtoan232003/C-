#include<bits/stdc++.h>
using namespace std;

long long sum(long long dau, long long cuoi, long long khoangcach){
	long long tmp =(cuoi-dau)/khoangcach + 1;
	return (cuoi + dau)* tmp /2;
}

int main(){
	long long n;
	cin >> n;
	long long chancuoi, lecuoi;
	if(n%2){
		chancuoi = n-1;
		lecuoi =n;
	}
	else
	{
		chancuoi=n;
		lecuoi=n-1;
	}
	cout << sum(2, chancuoi, 2) - sum(1, lecuoi, 2) << endl;
	return 0;
}
