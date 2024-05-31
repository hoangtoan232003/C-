#include<iostream>
#include <cmath>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	int n; char c; int a=0, b=0;
	cin >> n;
	for(int i=0; i<n; i++)
	{
		cin >> c;
		if(c == 'C') a++;
		else if(c == '+') b++;
	}
	if(a>=1 && b>=2) cout << "YES";
	else cout << "NO";
	return 0;
}
