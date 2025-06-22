#include<iostream>
#include<vector>
#include<string>
using namespace std;
void solve(vector<int>arr,int indexx,vector<int>outputt,vector<vector<int>>&anss){
    
if(indexx>=arr.size()){
    if(outputt.size()>=1)
anss.push_back(outputt);

return ;
}
 solve(arr,indexx+1,outputt,anss);
int ele=arr[indexx];
outputt.push_back(ele);
solve(arr,indexx+1,outputt,anss);
}
void solve(string str,int index,vector<char>output,vector<vector<char>>&ans){
if(index>=str.length()){

ans.push_back(output);
return ;
}
 solve(str,index+1,output,ans);

output.push_back(str[index]);
solve(str,index+1,output,ans);
}
int main(){
vector<int>arr={1,2,3};
vector<vector<char>>ans;
vector<char>output;
vector<vector<int>>anss;
vector<int>outputt;
string str="apple";
solve(str,0,output,ans);
solve(arr,0,outputt,anss);
 for (auto subset : ans) {
        cout << "[ ";
        for (char ch: subset)
            cout << ch << " ";
        cout << "]\n";
    }
for (auto subset : anss) {
        cout << "[ ";
        for (int num: subset)
            cout << num << " ";
        cout << "]\n";
    }
    return 0;
}
