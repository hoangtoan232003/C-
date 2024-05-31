#include<iostream>
using namespace std;
int main(){
	int h, m;
	cin >> h >> m;
	if(0<=h && h<24 && 0<=m && m<60)
	{
		int hieu = 1440 - (h*60) - m;
		cout << hieu;
	}
}
