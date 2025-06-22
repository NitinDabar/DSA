#include<iostream>
using namespace std;
int getlenght(char arr[]){
    int count =0;
    for(int i=0;arr[i]!='\0';i++){
        count++;
    }
    return count;
    cout<<count;
}
bool palindrone(char arr[],int n){
    int s=0;
    int e=n-1;
    for(int i=0;i<n/2;i++){
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
    char arr[]= "sstring";
    getlenght( arr);
    palindrone(arr,7);
    cout<<getlenght( arr);
    return 0;
}