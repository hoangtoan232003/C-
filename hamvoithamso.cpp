#include<iostream>
using namespace std;
void displaynumber(long long x, long long y, long long z)
{
	cout << y << " " << x << " " << z << endl;
	cout << x+y+z << endl;
	cout << "KET THUC !";
}

int main(){
	long long a, b, c;
	cin >> a >> b >> c;
	displaynumber(a, b, c);
	return 0;
}

