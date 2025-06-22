#include <iostream>
#include <vector>
using namespace std;

vector<int> findsum(vector<int>& arr1, int n, vector<int>& arr2, int m) {
    int i = n - 1;
    int j = m - 1;
    int carry = 0;
    vector<int> ans;
    
    // Traverse both arrays and add corresponding digits
    while (i >= 0 || j >= 0 || carry) {
        int v1 = (i >= 0) ? arr1[i] : 0;
        int v2 = (j >= 0) ? arr2[j] : 0;
        
        int sum = v1 + v2 + carry;
        
        carry = sum / 10;  // Calculate carry for the next step
        sum = sum % 10;    // Keep only the unit digit
        
        ans.push_back(sum);
        
        i--;
        j--;
    }
    
    // Reverse the result to have the correct order
    
    
    return ans;
}

int main() {
    vector<int> arr1 = {1, 2};  // Number 12
    vector<int> arr2 = {2};     // Number 2
    
    vector<int> result = findsum(arr1, arr1.size(), arr2, arr2.size());
    
    // Print the result (sum of 12 + 2 = 14)
    for (int digit : result) {
        cout << digit;
    }
    cout << endl;  // Output should be "14"
    
    return 0;
}
