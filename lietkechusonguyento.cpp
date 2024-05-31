#include<bits/stdc++.h>
using namespace std;

int d[10];//d[i] = so lan xuat hien cua i

void dem(long long n){
    long long N=n;
    while(N){
        d[N%10]++;
        N/=10;
    }
    for(int i=1;i<10;i++)
    {
        if(d[i]!=0 && (i==2 || i==3 || i==5 || i==7))
        {
            cout << i << " " << d[i] << endl;
        }
    }
    cout << endl;
    
    // lat nguoc n va luu vao N
    N=0;
    while(n){
    	N = N*10 + n%10;
		n/=10; 
	}
	//duyet N
	while(N){
		int i = N%10;
		if(d[i]!=0 &&(i==2 || i==3 || i==5 || i==7))
		{
			cout << i << " " << d[i] << endl;
			d[i]=0;
		}
		N/=10;
	}
}

int main(){
    long long n;
    cin >> n;
    dem(n);
    return 0;
}
