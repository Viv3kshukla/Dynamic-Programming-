#include<bits/stdc++.h>
using namespace std;
int max(int a,int b){
	return a>b?a:b;
}
int main(){
	int n;
	cin>>n;
	int arr[n+1][n+1];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>arr[i][j];
		}
	}
	int dp[n+1][n+1];
	for(int i=0;i<=n;i++){
		for(int j=0;j<=n;j++){
			int maxn=0;
			if(i==0||j==0){
				dp[i][j]=0;
				continue;
			}
			if(i==1&&j==1){
				dp[i][j]=1;
				continue;
			}
			if(arr[i][j]-arr[i-1][j]==1||arr[i][j]-arr[i-1][j]==-1){
				maxn=max(maxn,dp[i-1][j]+1);
			}
			if(arr[i][j]-arr[i][j-1]==1||arr[i][j]-arr[i][j-1]==-1){
				maxn=max(maxn,dp[i][j-1]+1);
			}
			dp[i][j]=maxn;	
		}
		
	}
	int maxn=0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(maxn<dp[i][j]){
				maxn=dp[i][j];
			}		
		}
	}
	cout<<"the length of longest chain is "<<maxn<<endl;
	return 0;
}
