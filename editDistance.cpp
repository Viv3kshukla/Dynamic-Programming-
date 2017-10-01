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
				dp[i][j]=j;
			}
			else if(j==0){
				dp[i][j]=i;
			}
			else if(str1.at(i-1)==str2.at(j-1)){
				dp[i][j]=dp[i-1][j-1];
			}
			else{
				dp[i][j]=min(min(dp[i-1][j],dp[i][j-1]),dp[i-1][j-1])+1;
			}
		}
	}
	cout<<"minimum number of operations required would be "<<dp[n][m];
	return 0;
}
