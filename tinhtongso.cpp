#include<iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	int sum = 0; int soluong = 0;
	for(int i=0; i<n; i++)
	{
		char c;
		cin >> c;
		if(c>='0' && c<='9') {sum += c-'0';}
		else if((c>='a' && c<='z') || (c>='A' && c<='Z')) soluong ++;
		
	}
	cout << soluong << endl << sum;
}
