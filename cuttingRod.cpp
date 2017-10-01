#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int length[n],cost[n];
	for(int i=0;i<n;i++){
		cin>>length[i];
	}
	for(int i=0;i<n;i++){
		cin>>cost[i];
	}
	int req;
	cin>>req;
	int dp[req+1];
	for(int i=0;i<=req;i++){
		dp[i]=0;
	}
	for(int i=0;i<n;i++){
		for(int j=length[i];j<=req;j++){
			dp[j]=max(dp[j],dp[j-length[i]]+cost[i]);
		}
	}
	cout<<dp[req]<<endl;
	return 0;
}
