#include <iostream>
using namespace std;

bool ispossible(int arr[],int n,int m,int mid){
    int pagesum=0;
    int studentcount=1;
    for(int i=0;i<n;i++){
        if(pagesum+arr[i]<=mid){
            pagesum+=arr[i];
        }
        else{
            studentcount++;
            if(studentcount>m || arr[i]>mid){
                return false;
            }
            pagesum=arr[i];
        }
        
    }
    return true;
}
int books(int arr[],int n,int m){
    int s=0;
    int sum=0;
    int ans= -1;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    int e=sum;
    int mid= s+(e-s)/2;
    while(s<=e){
        if(ispossible(arr,n ,m,mid )){
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int main(){
    int arr[]={10,20,30,40,43,56,24,53};
    int m=5;
    int soln=books(arr,8,5);
    cout<<"The minimum books are "<<soln<<endl;
    return 0;
    }