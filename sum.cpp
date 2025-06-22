#include<iostream>
#include<vector>
using namespace std;
vector<int> findsum(vector<int>& arr1,int n,vector<int>& arr2,int m){
    int i=n-1;
    int j=m-1;
    vector<int> ans;
    while(i>=0 && j>=0){
        int v1=arr1[i];
        int v2=arr2[j];
        int carry=0;
        int sum=v1+v2+carry;
        carry=sum/10;
        sum=sum%10;
        ans.push_back(sum);
        i--;
        j--;

    }
    while(i>=0 ){
        int v1=arr1[i];
        
        int carry=0;
        int sum=v1+carry;
        carry=sum/10;
        sum=sum%10;
        ans.push_back(sum);
         i--;
    }

while(j>=0 ){
        int v2=arr2[j];
        
        int carry=0;
        int sum=v2+carry;
        carry=sum/10;
        sum=sum%10;
        ans.push_back(sum);
         j--;

}
    return ans;
    }
    int main(){
        vector<int>arr1={1,2};
        vector<int>arr2={2};
        vector<int>ok=findsum(arr1,2,arr2,1);
       for (int digit : ok) {
        cout << digit;
    }
        return 0;
    }