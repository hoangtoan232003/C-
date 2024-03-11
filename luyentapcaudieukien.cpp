#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n;
	cin >> n;
	if(n % 2 == 0){ cout << "YES" << endl;
	}
	else {cout << "NO" << endl};
	if(n%3==0 && n%5==0){ cout << "YES" << endl;
	}
	else {cout << "NO" << endl};
	if(n%3==0 && n%7 !=0){ cout << "YES" << endl;
	} 
	else {cout << "NO" << endl};
	if(n%3==0 || n%7==0){ cout << "YES" << endl;
	}
	else {cout << "NO" << endl};
	if( n>30 && n<50){ cout << "YES" << endl;
	}
	else {cout << "NO" << endl};
	if( n>=30 ){ 
	if(n%2==0 || n%3==0 || n%5==0){cout << "YES" << endl;}
	else {cout << "NO" << endl};
	}
	else {cout << "NO" << endl};
	if(n>=10 && n<=99){ 
	if(n%10==2 || n%10==3 || n%10==5 || n%10==7 ){ cout << "YES";}
	else {cout << "NO" << endl};
	}
	else {cout << "NO" << endl};
	if(n<=100 && n%23==0){ cout << "YES" << endl;
	}
	else {cout << "NO" << endl};
	if(n>=10 && n<=20){ cout << "NO" << endl;
	}
	else {cout << "YES" << endl};
	int a = n % 10;
	if(a==0 || a==3 || a==6 || a==9){ cout << "YES" << endl;
	}
	else {cout << "NO" << endl};
}
