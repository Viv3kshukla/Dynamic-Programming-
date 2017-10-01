#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int sum=0;
	int partial_start=0,start=0,end=0;
	int max_ending_here=0;
	for(int i=0;i<n;i++){
		sum=sum+arr[i];
		if(sum>max_ending_here){
			max_ending_here=sum;
			start=partial_start;
			end=i+1;			//kadane's algorithm
		}
		else if(sum<=0){
			sum=0;
			partial_start=i+1;
		}
		
	}
	cout<<"the value of start and end is "<<start<<"   "<<end<<endl;
	cout<<max_ending_here<<endl;
	return 0;
}
