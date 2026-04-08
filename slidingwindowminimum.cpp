#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int x,a,b,c;
    cin>>x>>a>>b>>c;
     vector<int>arr(n);
    arr[0]=x;
    for(int i=1;i<n;i++){
      arr[i]=(1LL*a*arr[i-1]+b)%c;
    }
    
    deque<int>q;
     long long ans=0;
   for(int i=0;i<arr.size();i++){
    if(!q.empty() && i-k>=q.front()){
        q.pop_front();
    }
    while(!q.empty() && arr[q.back()]>arr[i]){
        q.pop_back();
    }
    q.push_back(i);
    if(i>=k-1){
        ans=ans^arr[q.front()];
    }

   }
  
  
   cout<<ans;
   return 0;

}


