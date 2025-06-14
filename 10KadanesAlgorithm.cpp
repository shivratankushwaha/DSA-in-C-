#include<iostream>
using namespace std;

int main() {

    // Subarray's
    int n = 5;
    int arr[n] = {1,2,3,4,5};

    for (int st = 0; st < n; st++) {
        for (int end = st; end < n; end++) {
            for (int i = st; i <= end; i++) {
                cout << arr[i];
            } 
            cout << " ";  
        }  
        cout << endl;    
    }

    // Maximum Subarray Sum

    // Brute Force Approach -> O(n^3) Time complexity
    int n1 = 7;
    int arr1[n] = {3,-4,5,4,-1,-7,8};
    int maxi = arr1[0];
    
    for (int st = 0; st < n1; st++) {
        for (int end = st; end < n1; end++) {
            int sum = 0;
            for (int i = st; i <= end; i++) {
                sum += arr1[i];
            } 
            if(maxi < sum) {
                maxi = sum;
            }
        }  
    }
    cout << "Maximum subarray's sum: "<< maxi << endl;

    // Optimize of Brute Force Approach -> O(n^2) Time complexity
    int n2 = 7;
    int arr2[n] = {3,-4,5,-4,-1,7,-8};
    int maxiSum = INT_MIN;
    
    for (int st = 0; st < n2; st++) {
        int currSum = 0;
        for (int end = st; end < n2; end++) {
            currSum += arr2[end];
            maxiSum = max(currSum, maxiSum); 
        }  
    }
    cout << "Maximum subarray's sum: "<< maxiSum << endl;

    // Kadane's Algorithm -> O(n) Time complexity
    int n3 = 7;
    int arr3[n] = {3,-4,5,4,-1,7,-8};
    int currSum = 0, maxSum = INT_MIN;
    
    for (int i = 0; i < n3; i++) {
            currSum += arr3[i];
            maxSum = max(currSum, maxSum);
            if(currSum < 0)
                currSum = 0;
    }
    cout << "Maximum subarray's sum: "<< maxSum << endl;
    

    return 0; 
}