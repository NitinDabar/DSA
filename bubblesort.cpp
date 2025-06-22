#include<iostream>
using namespace std;
void bubbleSort(int arr[],int n){
    for(int i=0; i<n-1;i++){
        for(int j=0;j<n-i;j++){
            if(arr[j+1]<arr[j]){
                swap(arr[j+1],arr[j]);
            }
        }
    }
}
int main(){
    int arr[]={23,45,12,2,42,53};
    int n=sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    return 0;

}