#include<iostream>
using namespace std;

bool chua6(int n){
    while(n>0){
		if(n%10==6)return true;
		n /=10;
	}
	return false;
}

bool tongchan(int n){
    int tong= 0;
    while(n>0)
    {
		tong += n%10;
		n /=10;
	}
	return tong%2 == 0;
}

bool chanle(int n){
    int chan=0, le=0;
    while(n>0){
    	int a = n%10;
    	if(a %2 ==0) chan++;
    	else le++;
    	n/=10;
	}
	return chan < le;
}

int main(){
    int a, b;
    cin >> a >> b;
    for(int i = a; i <= b; i++){
        if(chua6(i) && tongchan(i) && chanle(i)){
            cout << i << " ";
        }
    }
}
