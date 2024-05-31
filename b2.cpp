#include<iostream>
using namespace std;
int main(){
	long long T, N1, N2, N3, i, j, k;
	long long A[i], B[j], C[k];
	cin >> T;
	cin >> N1 >> N2 >> N3;
	cin >> A[i] >> B[j] >> C[k];
	for(i=0; i<=N1; i++)
	{
		for(j=0; j<=N2; j++)
		{
			for(k=0; k<=N3; k++)
			{
				if(A[i] == B[j] && B[j] == C[k])
				{
					cout << A[i];
				}
				else if(A[i] != B[j] && B[j] != C[k])
				{
					cout << -1;
				}
			}
		}
	}
	return 0;
}
