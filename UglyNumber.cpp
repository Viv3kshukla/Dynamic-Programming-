#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int i2,i3,i5,id;
	i2=i3=i5=0;
	int dp[n+1];
	int num2=1,num3=1,num5=1;
	dp[0]=1;
	for(int i=1;i<n;i++){
		num2=dp[i2]*2;
		num3=dp[i3]*3;
		num5=dp[i5]*5;
		int num_here=min(num2,min(num3,num5));
		dp[i]=num_here;
		if(num_here==num2){
			i2=i;
		}
		else if(num3==num_here){
			i3=i;
		}
		else if(num5==num_here){
			i5=i;
		}
		
	}
	for(int i=0;i<n;i++){
		cout<<dp[i]<<" ";
	}
//	cout<<dp[n-1]<<endl;
	return 0;
}
