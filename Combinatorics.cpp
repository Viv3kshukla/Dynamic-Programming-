#include<bits/stdc++.h>
#define ll long long
#define MOD 1000000007
#define MAXN 1001
using namespace std;
int main(){
	int t;
	ll C[MAXN][MAXN];
	for(int i=1;i<MAXN;i++){
		C[i][0]=C[i][i]=1;
		for(int j=1;j<i;j++){
			C[i][j]=(C[i-1][j]%MOD+C[i-1][j-1]%MOD)%MOD;
		}
	}
	cin>>t;
	while(t--){
		
		int n,p;
		cin>>n>>p;
		ll sum=0;
		for(int i=0;i<=p;i++){
			sum=((sum)%MOD+C[n][i]%MOD)%MOD;
		}
		cout<<sum<<endl;
	
	}
	return 0;
	
}
