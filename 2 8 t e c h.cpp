#include<bits/stdc++.h>
using namespace std;

int main()
{
     int n; cin >> n;
     char a[n];
     for(char &x : a) cin >> x;
     char t[]= {'2', '8', 't', 'e', 'c', 'h'};
     int j=0;
     for(int i=0;i<n;i++)
     {
         if(i%2==0 && a[i] == t[j])
         {
             ++j;
        }
        if(j==6) break;
     }
     if(j==6) cout << "28TECH";
     else cout << "HCET82";
}
