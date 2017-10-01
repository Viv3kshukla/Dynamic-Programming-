#include<bits/stdc++.h>
using namespace std;
int min(int a,int b){
	return a>b?b:a;
}
int main(){
	int n,m;
	cin>>n>>m;
	int arr[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>arr[i][j];
		}
	}
	int dp[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(i==0||j==0){
				dp[i][j]=arr[i][j];
				continue;
			}
			if(arr[i][j]==1){
				dp[i][j]=min(min(dp[i-1][j],dp[i][j-1]),dp[i-1][j-1])+1;
			}
			else{
				dp[i][j]=0;
			}
		}
	}
	cout<<"displaying matrix"<<endl;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<dp[i][j]<<" ";
		}	
		cout<<endl;
	}
	int maxn=0,_i,_j;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(maxn<dp[i][j]){
				maxn=dp[i][j];
				_i=i;
				_j=j;
			}
		}
	}
	cout<<"entering solutions"<<endl;
	for(int i=_i-maxn+1;i<=_i;i++){
		for(int j=_j-maxn+1;j<=_j;j++){
			cout<<arr[i][j]<<" ";
		}	
		cout<<endl;
	}
	cout<<" the value of maxn and _i and _j is "<<maxn<<" "<<_i<<" "<<_j<<endl;
	
	return 0;
}
