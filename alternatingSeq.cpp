#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	bool flag;
	int dp[n+1];
	dp[0]=1;
	if(dp[0]>dp[1]){
		flag=true;
		dp[1]=2;
	}
	else{
		flag=false;
		dp[1]=2;
	}
	for(int i=2;i<n;i++){
		if(arr[i-1]>arr[i]&&flag==true){
			flag=false;
			dp[i]=dp[i-1]+1;
		}
		else if(arr[i-1]<arr[i]&&flag==false){
			dp[i]=dp[i-1]+1;
			flag=true;
		}
		else{
			if(dp[i]<dp[i-1]){
				dp[i]=2;
				flag=true;
			}
			else{
				dp[i]=2;
				flag=false;
			}
		}
	}
	int maxn=0;
	for(int i=0;i<n;i++){
		cout<<dp[i]<<" ";
		if(maxn<dp[i]){
			maxn=dp[i];
		}
	}
	cout<<endl;
	cout<<maxn<<endl;
	return 0;
}
