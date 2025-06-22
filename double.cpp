#include<iostream>
using namespace std;
void bubbleSort(int arr[],int n){
    for(int i=0; i<n;i++){
        
            if(arr[i]==arr[i+1]){
                arr[i]=2*arr[i];
                arr[i+1]=0;
            }
        }
    }

int main(){
    int arr[]={23,45,45,12,42,42,53};
    int n=sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}

