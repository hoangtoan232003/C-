#include<iostream>
using namespace std;
bool sogiam(int n){
	while(n>=0){
		int sau = n%10;
		int truoc = (n/10) %10;
		if( truoc <= sau) return false;
		n/=10;
	}
	return true;
}
int main(){
	int a, b;
	cin >> a >> b;
	bool c = false;
	for(int i=a; i<=b; i++)
	{
		if(sogiam(i)) cout << i << " ";
		c = true;
	}
	if(c != true) cout << "28tech\n";
}
