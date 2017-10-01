#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	int arr[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>arr[i][j];
		}
	}
	int dp[n+1][m+1];
	for(int i=0;i<=n;i++){
		for(int j=0;j<=m;j++){
			if(i==0&&j==0){
				dp[i][j]=0;
			}
			
			else if(i==0||j==0){
				dp[i][j]=10000000;
			}
			else{
				dp[i][j]=min(dp[i][j-1],min(dp[i-1][j],dp[i-1][j-1]))+arr[i-1][j-1];
			}
		}
	}
	for(int i=0;i<=n;i++){
		for(int j=0;j<=m;j++){
			cout<<dp[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"min cost is ";
	cout<<dp[n][m]<<endl;
	return 0;
}
