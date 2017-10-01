#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int maxx[n];
	int maxxx=0;
	for(int i=0;i<n;i++){
		if(arr[i]>maxxx){
			maxxx=arr[i];
		}
		maxx[i]=maxxx;
	}
	int dp[n+1];
	dp[0]=0;
	for(int i=1;i<n;i++){
		for(int j=1;j<=i;j++){
			if(arr[j]>maxx[j-1]){
				dp[i]=dp[i-1]+1;
			}
			else{
				dp[i]=dp[i-1];
			}
		}
	}
	cout<<dp[n-1]<<endl;
	return 0;
	
}
