#include<iostream>
using namespace std;
bool chanle(int n){
	int chan=0, le=0;
	while(n>0)
	{
		int a = n%10;
		if(a%2 == 0) chan ++;
		else le++;
		n /=10;
	}
	return chan > le;
}
 bool tinhtong(int n){
 	int tong=0;
	 while(n>0)
 	{
 		while(n>0)
 		{
 			tong += n%10;
 			n/=10;
		}
	}
	return chanle(tong);
 }
 int main(){
 	int n;
 	cin >> n;
 	for(int i=1; i<=n; i++)
 	{
 		if(tinhtong(i)) cout << i << " ";
	 }
	 return 0;
 }
