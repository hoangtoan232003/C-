#include<iostream>
using namespace std;
void myswap(int &a, int &b){
	swap(a, b);
}
int main(){
	int x, y;
	cin >> x >> y;
	myswap(x, y);
	cout << x << " " << y;
	return 0;
}
