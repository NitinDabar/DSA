#include<iostream>
using namespace std;
int length(char arr[]){
    int count=0;
    for(int i=0;arr[i]!='\0';i++){
        count++;
    }
    return count;
}
bool checkPalindrome(char arr[],int n){
    int s=0;
    int e=n-1;
    while(s<=e){
        if(arr[s]!=arr[e]){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}
int main(){
    char arr[10];
    cout<<"enter ";
    cin>>arr;
    int len=length(arr);
    checkPalindrome(arr,len);
    cout<<"string is palindrome "<<checkPalindrome(arr,len);
    return 0;
}