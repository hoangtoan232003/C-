#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	int chan = 0, le =0;
	while(cin >> n)
	{
		if(n % 2 ==0) chan++;
		else le++;
	}
	if(chan > le) cout << "CHAN";
	else if(le > chan) cout << "LE";
	else cout << "CHANLE";
}
