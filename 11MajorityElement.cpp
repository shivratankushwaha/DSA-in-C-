#include<iostream>
using namespace std;
#include<vector>
#include<algorithm> // for sort function

// Pair Sum (Return Pair in Sorted array with target sum)

// Brute Force Approach -> O(n^2)

vector<int> PairSum(vector<int> nums, int target) {
    vector<int> ans;

    for(int i = 0; i < nums.size(); i++) {
        for (int j = i+1; j < nums.size(); j++) {
            if((nums[i] + nums[j]) == target) {
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }      
    }
    return ans;
}

// Two Pointer Approach -> O(n)

vector<int> TwoPointerPairSum(vector<int> nums, int target) {
    vector<int> ans;
    int n = nums.size();

    int i = 0, j = n-1;

    while (i < j) {
        int PS = nums[i] + nums[j];
        if (PS > target) {
            j--;
        } else if(PS < target) {
            i++;
        } else {
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }     
    }
    return ans;
}

// Majority Element

// int majorityElement(vector<int>& nums) {
        
//     int n = nums.size(), count = 1;
//     for(int  i = 0; i < n; i++) {
//         for(int  j = i+1; j < n; j++) {
//             if(nums[i] == nums[j]) {
//                 count++;
//             }
//         }
//         if(count >= n/2) {
//             return nums[i];
//         }
//         while(nums[i] != nums[i+1]) {
//             i++;
//         }
//     }
//     return -1;
// }

// Brute Force Approach -> O(n^2)

int BFAmajorityElement(vector<int>& nums) {
        
    int n = nums.size();
    for(int  i : nums) {
        int count = 0;
        for(int  j : nums) {
            if(i == j) {
                count++;
            }
        }
        if(count > n/2) {
            return i;
        }
    }
    return -1;
}

// Sorting Approach -> O(n log n)

int SortmajorityElement(vector<int>& nums) {
    int n = nums.size();

    //sort
    sort(nums.begin(), nums.end());

    //freq count
    int freq = 1, ans = nums[0];

    for(int  i=1; i<n; i++) {
        if(nums[i] == nums[i-1]) {
            freq++;
        } else {
            freq = 1, ans = nums[i];
        }

        if(freq > n/2) {
            return ans;
        }
    }
    return -1;
}

//Moore's Voting Algorithm -> O(n)

int MVAmajorityElement(vector<int>& nums) {
    int n = nums.size();
    int freq = 0, ans = 0;

    for (int i = 0; i < n; i++) {
        if(freq == 0) {
            ans = nums[i];
        }

        if(ans == nums[i]) {
            freq ++;
        } else {
            freq --;
        }
    }
    // return ans;

    // check is answer exists if not then return -1
    int count = 0;
    for(int val : nums) {
        if(val == ans) {
            count++;
        }
    }

    if(count > n/2) {
        return ans;
    }
    else {
        return -1;
    }
    
}

int main() {

    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    // Pair Sum

    // Brute Force Approach
    vector<int> ans = PairSum(nums, target);
    if (!ans.empty()) {
        cout << ans[0] << ", " << ans[1] << endl;
    } else {
        cout << "No pair found" << endl;
    }

    // Two Pointer Approach
    vector<int> ans1 = TwoPointerPairSum(nums, target);
    if (!ans.empty()) {
        cout << ans[0] << ", " << ans[1] << endl;
    } else {
        cout << "No pair found" << endl;
    }

    // Majority Element
    
    // Brute Force Approach -> O(n^2)
    int ans2 = BFAmajorityElement(nums);
    cout << "Majority Element (Brute Force): " << ans2 << endl;

    // Sorting Approach -> O(n log n)
    int ans3 = SortmajorityElement(nums);
    cout << "Majority Element (Sorting): " << ans3 << endl;

    //Moore's Voting Algorithm -> O(n)
    int ans4 = MVAmajorityElement(nums);
    cout << "Majority Element (Moore's Voting): " << ans4 << endl;

    return 0;
}