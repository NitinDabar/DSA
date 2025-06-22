#include <iostream>
using namespace std;
#include<algorithm>
void reverse(string& str,int i){
    cout<<str<<endl;
    int n=str.length();
    if(i>=n-i-1) return ;
    swap(str[i],str[n-i-1]);
    i++;
   
   reverse(str,i);
    
}
bool palindrome(string str,int i,int j){
    if(i>j) return true;
    if(str[i] !=str[j]) {
         return false;
    }
    else{
        return palindrome(str,i+1,j-1);
    }

}
int main(){
    string  str="love";
    string strr="nitin";
    reverse(str,0);
cout<<"final reversed str is -> "<<str<<endl;
bool ans=palindrome(strr,0,strr.length()-1);
cout<<ans<<endl;
}