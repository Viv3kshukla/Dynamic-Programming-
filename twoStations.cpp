#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr1[n],arr2[n],t1[n],t2[n];
	for(int i=0;i<n;i++){
		cin>>arr1[i];
	}
	for(int i=0;i<n;i++){
		cin>>arr2[i];
	}
	for(int i=0;i<n;i++){
		cin>>t1[i];
	}
	for(int i=0;i<n;i++){
		cin>>t2[i];
	}
	bool flag=false;
	int dp[n+1];
	dp[0]=0;
	for(int i=1;i<=n;i++){
		if(arr1[i-1]+t1[i]<arr2[i-1]){
			dp[i]=dp[i-1]+arr1[i-1]+t1[i];
		}
		else{
			dp[i]=dp[i-1]+arr2[i-1];
		}
		if(arr2[i-1]+t1[i]<arr1[i-1]){
			dp[i]=dp[i-1]+arr2[i-1]+t1[i];
		}
		else{
			dp[i]=dp[i-1]+arr1[i-1];
		}		
	}
	
	return 0;
}
