#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int sum;
	cin>>sum;
	int dp[sum+1];
	for(int i=0;i<=sum;i++){
		dp[i]=0;
	}
	dp[0]=1;
	for(int i=0;i<n;i++){
		for(int j=arr[i];j<=sum;j++){	
			dp[j]+=dp[j-arr[i]];	
		}
	}
	for(int i=0;i<=sum;i++){
		cout<<dp[i]<<" ";
	}
	cout<<endl;
	cout<<"number of ways are "<<dp[sum]<<endl;
	return 0;
}
