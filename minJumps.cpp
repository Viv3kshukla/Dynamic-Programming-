#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int dp[n+1];
	
	for(int i=0;i<=n;i++){
		dp[i]=10000007;
	}
	dp[0]=0;
	for(int i=0;i<=n;i++){
		for(int j=0;j<i;j++){
			if(j+arr[j]>=i){
				dp[i]=min(dp[i],dp[j]+1);
			}
		}
	}
	for(int i=0;i<=n;i++){
		cout<<dp[i]<<" ";
	}
	cout<<endl;
	return 0;
}
