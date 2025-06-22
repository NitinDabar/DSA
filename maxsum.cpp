#include<iostream>
#include<vector>
using namespace std;
int maxsum(vector<int>&arr,int k){
    int s=0,r=0;
    int maxsum=0,sum=0;
    for(int i=0;i<k;i++){
        maxsum=arr[i]+maxsum;


    }
    sum=maxsum;
    for(int i=k;i<arr.size()-1;i++){
        sum=sum+arr[i]-arr[i-k];
maxsum=max(maxsum,sum);
    }
    return maxsum;
}
int main(){
    vector<int>arr={1,2,3,4,5,6,7,8,9,0};
    int result=maxsum(arr,4);
    cout<<result<<endl;
    return 0;
}