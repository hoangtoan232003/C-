#include<iostream>
using namespace std;
int main(){
	int a1, a2, a3, b1, b2, b3, n;
	cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3;
	cin >> n;
	int a = a1+a2+a3;
	int b = b1+b2+b3;
	int tong = (a+4)/5 + (b+9)/10;
	if(tong <=n)
	{ 
	cout << "YES";
	} else cout << "NO";
}
