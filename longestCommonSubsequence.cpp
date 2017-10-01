#include<bits/stdc++.h>
using namespace std;
int main(){
	string str1,str2;
	cin>>str1>>str2;
	int n=str1.length();
	int m=str2.length();
	int dp[n+1][m+1];
	for(int i=0;i<=n;i++){
		for(int j=0;j<=m;j++){
			if(i==0){
				dp[i][j]=0;
			}
			else if(j==0){
				dp[i][j]=0;	
			}
			else if(str1.at(i-1)==str2.at(j-1)){
				dp[i][j]=1+dp[i-1][j-1];
			}
			else{
				dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
			}
		}
	}
	int maxn=0;
	for(int i=0;i<=n;i++){
		for(int j=0;j<=m;j++){
			if(dp[i][j]>maxn){
				maxn=dp[i][j];
			}
		}
	}
	cout<<"the length of longest common subsequence is "<<maxn<<endl;
	return 0;
}
