#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int a, b, c;
	cin >> a >> b >> c;
	if(a>0 && b >0 && c>0 && a<b+c && b<a+c && c<a+b)
	{
		cout << "YES";
	} else cout << "NO";
}
