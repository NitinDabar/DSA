#include<iostream>
using namespace std;
void spiral(int arr[][4],int n,int m){
int top=0,left=0,right=m-1,bottom=n-1;
while(left<=right && top<=bottom){
    for(int i=left;i<=right;i++){
        cout<<arr[top][i];
    }
        top++;
    
     for(int i=top;i<=bottom;i++){
        cout<<arr[i][right];
         }
             right--;
             if(top<=bottom){
    
    for(int i=right;i>=left;i--){
        cout<<arr[bottom][i];
        }
            bottom--;
             }
             if(left<=right){
    for(int i=bottom;i>=top;i--){
        cout<<arr[i][left];
        }
            left++;
    }
    
}
}
void rotate(int arr[][4], int n, int m) {
    // Transpose the matrix (swap arr[i][j] and arr[j][i])
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < m; j++) {
            swap(arr[i][j], arr[j][i]);
        }
    }

    // Reverse each row manually (no reverse function)
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m / 2; j++) {
            swap(arr[i][j], arr[i][m - 1 - j]);
        }
    }

    // Print the rotated matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}


int main(){
    int arr[][4]={{1,2,2,4},{5,6,7,8},{12,23,34,56},{24,456,4,334}};
   spiral(arr,4,4);
    rotate(arr,4,4);
}
