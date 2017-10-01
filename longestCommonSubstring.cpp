#include<bits/stdc++.h>
using namespace std;
int main(){
	string str1,str2;
	cin>>str1>>str2;
	int n=str1.length(),m=str2.length();
	int dp[n+1][m+1];
	for(int i=0;i<=n;i++){
		dp[i][0]=0;
	}
	for(int j=0;j<=m;j++){
		dp[0][j]=0;
	}
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(j<i){
				dp[i][j]=0;
			}
			if(str2.at(j-1)==str1.at(i-1)){
				dp[i][j]=1+dp[i-1][j-1];
			}
			else{
				dp[i][j]=0;
			}
		}
	}
	int maxn=0;
	for(int i=0;i<=n;i++){
		for(int j=0;j<=m;j++){
			cout<<dp[i][j]<<" ";
			if(maxn<dp[i][j]){
				maxn=dp[i][j];
			}
		}
		cout<<endl;
	}
	cout<<"length of longest common substring is "<<maxn<<endl;
	return 0;
}
