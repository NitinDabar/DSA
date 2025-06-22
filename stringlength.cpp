#include<iostream>
using namespace std;
int length(char arr){
    int n=sizeof(arr)/sizeof(arr[0]);
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]!= \0){
            count++;
        }
    }
    return count;
}
int main(){
    char arr[10];
    cin>>arr;
    length(arr);
    cout<<length(arr);
    return 0;
}