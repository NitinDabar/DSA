#include<iostream>
using namespace std;
void rotate(int arr[],int n ,int k){
    int temp[n];
    for(int i=0;i<n;i++){
        temp[(i+k)%n]=arr[i];
    }
    for(int i=0;i<n;i++){
    arr[i]=temp[i];
    }
}
int main(){
    int arr[]={1,2,3,4,5,6,7};
    rotate(arr,7,5);
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
        cout<<arr[i]<<endl;
    }
    return 0;

}