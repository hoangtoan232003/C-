#include<iostream>
#include<cmath>
using namespace std;
int main(){
	double a, b, c, d, e;
	cin >> a >> b >> c >> d;
	if( 0 <=a && a<=10 && 0<=b && b<=10 && 0<=c && c<=10 && 0<=d && d<=10)
	{
	 e = (a + b + 2 * c + 3 * d )/7;
	}
	if(e >= 8)
	{
		cout << "GIOI";
	}
	else if ( e >= 6.5 && e < 8)
	{
		cout << "KHA";
	}
	else if( e < 6.5 && e >= 5)
	{
		cout << "TRUNG BINH";
	}
	else if(e < 5)
	{
		cout << "YEU";
	}
}
