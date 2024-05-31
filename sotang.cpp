#include<iostream>
using namespace std;
bool sotang(int n){
	while(n>=10)
	{
		int sau = n%10;
		int truoc = (n/10) % 10;
		if(truoc >= sau)
		return false;
		n/=10;
	}
	return true;
}
int main(){
	int a, b;
	cin >> a >> b;
	for(int i=a; i<=b; i++)
	{
		if(sotang(i)) cout << i << " ";
	}
	return 0;
}
