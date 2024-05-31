
#include<iostream>
using namespace std;
int main(){
	long long n;
	cin >> n;
	long long c = 0;
	c = n/100;
	c += (n%100)/20;
	c += (n%20)/10;
	c += (n%10)/5;
	c += n%5;
	cout << c;
}
