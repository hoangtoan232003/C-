#include<iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	for(int i=0; i<=n; i+=3)
	{
		cout << i << " ";
	} cout << endl;
	long long luythua=1;
	while(luythua<=n)
	{
		cout << luythua << " ";
		luythua*=2;
	} cout << endl;
	for(int i=n; ;i++)
	{
		if(i%17==0) {
		cout << i;
		break;
	}
	} cout << endl;
	for(int i=n-1;i>0 ;i--)
	{
		if(i%7==0){
			cout << i;
			break;
		}
	} cout << endl;
	long long dayso=1;
	int i=1;
	while(dayso<=n)
	{
		cout << dayso << " ";
		dayso +=i++;
	}
}
