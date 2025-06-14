#include<iostream>
#include<vector>                // Header file for vector
using namespace std;

int main() {

    // Declaration and Initialization

    vector<int> v1;                // Empty vector of integers
    // cout << v1.at(0);           // Error: v1 is empty

    vector<int> v2(5);             // Vector with 5 elements (default initialized to 0)
    cout << v2[0] << " ";
    cout << v2[3] << " ";
    cout << endl;

    vector<int> v3(5, 10);         // Vector with 5 elements, each initialized to 10
    cout << v3[0] << " ";
    cout << v3[3] << " ";
    cout << v3[4] << " ";
    cout << endl;

    vector<int> v4 = {1, 2, 3, 4};    // Vector initialized with values
    for(int val : v4) {            // For each loop
        cout << val << " ";       // it print all the values of vector
    }
    cout << endl;

    vector<char> vc = {'a', 'b', 'c'};
    for(char val : vc) {
        cout << val << " ";
    }
    cout << endl;

    vector<int> v5(v4);            // Copy of v4
    cout << v5[0] << " ";
    cout << v5[1] << " ";
    cout << v5[2] << " ";
    cout << v5[3] << " ";
    cout << endl;

    // Accessing Elements

    cout << "first = " << v5[0] << endl;     // No bounds checking
    cout << "second = " << v5.at(1) << endl; // With bounds checking (throws exception if out of range)
    cout << "front = " << v5.front() << endl;// First element
    cout << "back = " << v5.back() << endl;  // Last element

    // Adding Elements

    v1.push_back(10);       // Add element at the end
    v1.emplace_back(20);    // More efficient version of push_back (C++11)
    v1.insert(v1.begin() + 1, 15);  // Insert 15 at position 1

    for(int val : v1) {            
        cout << val << " ";       
    }
    cout << endl;
    
    // Removing Elements

    v4.pop_back();              // Remove last element
    for(int val : v4) {            
        cout << val << " ";       
    }
    cout << endl;

    v4.erase(v4.begin() + 1);   // Remove element at position 1
    for(int val : v4) {            
        cout << val << " ";       
    }
    cout << endl;
    
    v4.clear();                 // Remove all elements

    // Size and Capacity
    cout << "size = " << v1.size() << endl;         // Number of elements
    cout << "empty = " << v4.empty() << endl;       // True if vector is empty
    cout << "capacity = " << v1.capacity() << endl; // Current storage capacity

    v1.reserve(100);           // Reserve space for 100 elements
    v1.shrink_to_fit();        // Reduce capacity to fit size (C++11)
     
    // Single Number
    
    class Solution {
        public:
            int singleNumber(vector<int>& nums) {
                int ans = 0;
                for(int val : nums) {
                    ans ^= val;             // Bitwise XOR (^) -> 0^0 = 0, 1^1 = 0, 1^0 = 1, 0^1 = 1
                }
                return ans;
            }
        };

    // Linear Search

    class Linear {
        public:
            int LinearSearch(vector<int>& nums, int target) {
                int ind = 0;
                for(int val : nums) {
                    if(val == target) {
                        return ind;
                    }
                    ind++;
                }
                return -1;
            }
            int main() {
                vector<int> vec = {1,2,3,4};
                int ind = LinearSearch(vec, 4);
                if(ind != -1) {
                    cout << "found at: "<< ind;
                } else {
                    cout << "Not found!";
                }
            }
        };

    // Reverse code

    class Reverse {
        public:
            void Reversecode(vector<int>& nums, int size) {
                int start = 0, end = size - 1;
                while(start < end) {
                    swap(nums[start], nums[end]);
                    start++, end--;
                }
            }

            int main() {
                vector<int> vec = {1,2,3,4};
                int s = vec.size();
                for (int val : vec) {
                    cout << val << " ";
                }
                cout << endl;
                Reversecode(vec, s);
                for (int val : vec) {
                    cout << val << " ";
                }
                cout << endl;
            }
        };

    return 0;
}