#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int>&arr,int mid,int s,int e){
int i=s;
vector<int>temp;

int j=mid+1;
while(i<=mid && j<=e){
if(arr[i]<arr[j]){
temp.push_back(arr[i]);
i++;
}
else{
temp.push_back(arr[j]);
j++;
}
}
while(i<=mid)  temp.push_back(arr[i++]);
while(j<=e)  temp.push_back(arr[j++]);
for (int idx = s; idx <= e; idx++) {
        arr[idx] = temp[idx - s];  
        }
}

void mergeSort(vector<int>&arr,int s,int e){
if(s>=e)  return ;
int mid=s+ (e-s)/2;
mergeSort(arr,0,mid);
mergeSort(arr,mid+1,e);
merge(arr,mid,s,e);
}
int main(){
vector<int>arr={1,2,3,4,5,4,3,2,1};
mergeSort(arr,0,arr.size()-1);
for (int num : arr) {
        cout << num << " ";
    }

    return 0;
}