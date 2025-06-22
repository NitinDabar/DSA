#include<iostream>
using namespace std;
bool check(int arr[],int n){
    int count =0;
    for(int i=1;i<n;i++){
        if(arr[i-1]>arr[i]){
            count++;
        }
        }
        if(arr[n-1]>arr[0]){
            count++;
        }
        return count<=1;
    }
int main(){
    int arr[]={1,2,3,4,5};
    check(arr,5);
    if (check(arr, 5)) {
        cout << "The array is rotationally sorted." << endl;
    } else {
        cout << "The array is not rotationally sorted." << endl;
    }
    return 0;
}
