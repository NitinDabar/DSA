#include<iostream>
#include<algorithm>
#include<vector>
#include<unordered_map>
using namespace std;
void occurence(vector<int>& arr){
 unordered_map<int,int>freq;
 for(int a:arr){
    freq[a]++;

 }
 for(auto it:freq){
    cout<<it.first<<" "<<it.second<<endl;
 }
}
 void even(vector<int> & arr){
    int count=0;
    int cou=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]%2==0){
            count++;
        }
        else{
            cou++;
        }
    }
    cout<<count<<"are even and odd are "<<cou<<endl;
 }
 void move(vector<int>&arr){
    int j=0;
    for(int i=0;i<arr.size()-1;i++){
        if(arr[i]!=0){

            arr[j]=arr[i];
            j++;
        }
    }
    while(j<arr.size()){
        arr[j]=0;
        j++;
    }
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<endl;
    }
 }
 void sort(vector<int>&arr){
    int left=0,right=arr.size()-1;
    while(left<right){
        while(left<right && arr[left]!=0){
        left++;

        }
        while(left<right && arr[right]==0){
        right--;

        }
        if (left<right){
            swap(arr[left],arr[right]);

        }
        
        
    }
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<endl;
    }

 }
 


int main(){
    vector<int>arrr={1,3,2,1,2,0,1,0,3,4,1,3,2,46,4};
//     int arr[5]={1,2,3,4,5,};
//     char ch[6]="abcde";
//     cout<<arr<<endl;
//     cout<<*arr<<endl;
//     cout<<&arr<<endl;
//     cout<<*(arr+1)<<endl;
// cout<<3[arr]<<endl;
// cout<<ch<<endl;
// cout<<*ch<<endl;
// cout<<ch[0];
// cout<<&(*arr)<<endl;
// *arr=*arr+2;
// cout<<*arr<<endl;
// cout<<&ch<<endl;
// cout<<&arr<<endl;
// sort(arrr.begin(),arrr.end());


    

    occurence(arrr);
    even(arrr);
   // move(arrr);
    sort(arrr);
}
