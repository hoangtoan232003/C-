#include<iostream>
using namespace std;
bool sothuannghich(int n){
	int sum=0, a = n;
	while(n>0)
	{
		sum = sum * 10 + n % 10;
		n/=10;
	}
	return sum == a;
}
int main(){
	int a, b;
	cin >> a >> b;
	for(int i=a; i<=b; i++)
	{
		if(sothuannghich(i))
		cout << i << " ";
	}
	return 0;
}
