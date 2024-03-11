#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int a, b;
	cin >> a >> b;
	if( a >= 1 && a <= 12 && b > 0 )
	{
		if( a==1 || a==3 || a==5 || a==7 || a==8 || a==10 || a==12)
		{
			cout << 31;
		}
		else if( a==4 || a==6 || a==9 || a==11)
		{
			cout << 30;
		}
		else if(a==2)
		{
			if( b % 400 == 0 || (b % 4 == 0 && b % 100 != 0))
			{
				cout << 29;
			}
			else cout << 28;
		}
	}
	else cout <<"INVALID\n";
}
