#include<iostream>
using namespace std;
void sort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int minindex=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minindex]){
                minindex=j;
            }
        }
        swap(arr[minindex],arr[i]);
    }
}

int main(){
    int arr[]={34,7,346,3,46,27,345,14};
    sort(arr,8);
    for(int i=0; i<8;i++){
        cout<<arr[i] <<endl;
    }

    
    return 0;
}
