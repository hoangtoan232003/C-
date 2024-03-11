#include<iostream>
using namespace std;
int main(){
	int N;
	cin >> N;
	for(int i=0;i<N;i++)
	{
		cout << "Hello 28tech\n";
	} 
	for(int i=1;i<=N;i++)
	{
		cout << i << " ";
	} cout << endl;
	for(int i=0;i<=N-1;i++)
	{
		cout << i << " ";
	} cout << endl;
	for( int i = N; i>=1;i--)
	{
		cout << i << " ";
	} cout << endl;
	for(int i = N-1; i>=0 ;i--)
	{
		cout << i << " ";
	}
}
