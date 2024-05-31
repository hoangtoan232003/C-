#include<iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	while(n > 0)
	{
		for(int i=1; i<=n;i++) cout << i << " " << endl;
		for(int i=n; i>0;i--) cout << i << " " << endl;
		for(int i=1; i<=n; i++)
		{
			if(i%2 == 0) cout << i << " ";
		} cout << endl;
		for(int i=1; i<=n; i++)
		{
			if(i%2 !=0) cout << i << " ";
		} cout << endl;
		for(int i=0; i<n; i++)
		{
			if(i%4 ==0) cout << i << " ";
		} cout << endl;
		for(char i = 'a'; i<='a'+n;i++) cout << (char)i << " ";
		cout << endl;
		for(char i ='z'-n; i<='z';i++) cout << (char)i << " ";
	}
}
