#include<iostream>
using namespace std;
bool so_dep(int n){
	int chan=0, le=0;
	while(n){
		int digit = n%10;
		if(digit % 2==0) chan++;
		else le++;
		n/=10;
	}
	return chan == le;
}
int main(){
    int n; cin >> n;
    for(int i = 1; i <= n; i++){
        if(so_dep(i)){
            cout << i << " ";
        }
    }
    return 0;
}
