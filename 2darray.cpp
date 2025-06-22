#include<iostream>
using namespace std;
int arr[][4]={{1,2,2,4},{5,6,7,8},{12,23,34,56}};
void printsum(int arr[][4],int m,int n){
    int totalsum=0;
    for(int m=0;m<3;m++){
        int sum=0;
        for(int n=0;n<4;n++){
            sum=sum+arr[m][n];
        }
        cout<<sum<<" ";
        totalsum=totalsum+sum;
    }
    cout<<totalsum;
    cout<<endl;
}


bool ispresent(int arr[][4],int m,int n,int key){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]==key){
                return 1;

            }

    }
  
}
return 0;
}

int main(){
    int arr[][4]={{1,2,2,4},{5,6,7,8},{12,23,34,56}};
    printsum(arr,3,4);
    if(ispresent(arr,3,4,23)){
        cout<<"ok";
    }
    else{
        cout<<"oops";
    }
    return 0;
}