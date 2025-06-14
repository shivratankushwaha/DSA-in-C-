#include <iostream>
using namespace std;

//Pass by reference
void changeArr(int arr[], int size) {
    cout << "in function\n";
    for (int i = 0; i < size; i++)
    {
        arr[i] = 2* arr[i];
    } 
}

// Linear Search Algorithm
int linearSearch(int arr[], int size, int target) {
    for(int i = 0; i < size; i++) {
        if(arr[i] == target)
            return i;
    }
    return -1;
}

// Reverse array
void reverseArray(int arr[], int size) {
    int start = 0, end = size - 1;
    while(start < end) {
        swap(arr[start], arr[end]);
        start++, end--;
    }
}

// Sum & Product of all numbers in array
void sumproduct(int a[], int n) {
    int sum = 0, product = 1;
    for (int i = 0; i < n; i++) {
        sum += a[i];
        product *= a[i];
    }
    cout <<"Sum of the array: "<< sum << endl;
    cout <<"Product of the array: "<<  product << endl;
}

// Swap the max & min number of an array
void maxminSwap(int arr[], int n) {
    int small = arr[0], great = arr[0], min, max;
    
    for (int i = 0; i < n; i++) {
        if(small > arr[i]) {
            small = arr[i];
            min = i;
        }
        if(great < arr[i]) {
            great = arr[i];
            max = i;
        }
    }
    int temp = arr[min];
    arr[min] = arr[max];
    arr[max] =temp;
}

int main() {

    // array size is 50, just first 6 element are given
    int array[50] = {20, 34, 3442, 33, 55, 425};

    // if the size is equivalent to the data on the right side then we don't really need to give a size.
    double price[] = {98.99, 344.9, 3.43, 89.332};

    //Array Index
    array[0] = 99;
    cout << array[0] << endl;
    cout << array[1] << endl;
    cout << array[2] << endl;
    cout << array[3] << endl;
    cout << array[4] << endl;
    cout << array[5] << endl;

    // valid index goes 0 to size-1     (0 to 5)
    // cout << array[6] << endl;        6 position is doesn't have array so we can't access.
    // cout << array[-1] << endl;       -1 position is doesn't have array so we can't access.

    // total size of array in bytes
    cout << sizeof(array) << endl;

    // size of array (index)
    int size =sizeof(price)/sizeof(double);
    cout << sizeof(price)/sizeof(double) << endl;

    // Array loops : 0 to size-1
    for (int i = 0; i < size; i++) {
        cout << price[i] << endl;       // Output 
    }
    
    // input
    int n;
    cout << "Size of the array: "<< endl;
    cin >> n;

    int arrr[n];
    cout << "values of the array: "<< endl;
    for (int i = 0; i < n; i++) {
        cin >> arrr[i];
    }
    
    // Find smallest/ largest number in array
    int nums[6] = {5, 15, 22, 1, -15, 24};

    int smallest = INT_MAX;                // +infinity
    int largest = INT_MIN;                 // -infinity

    int smallest_index = 0, largest_index = 0;

    for (int i = 0; i < 6; i++) {
        if(nums[i] < smallest) {
            smallest = nums[i];
            smallest_index = i;
        }
        // smallest = min(nums[i], smallest);          //min function

        if(nums[i] > largest) {
            largest = nums[i];
            largest_index = i;
        }
        // largest = max(nums[i], largest);            //max function
    }

    cout << "Largest : " << largest << endl;
    cout << "Smallest : " << smallest << endl;

    // Find smallest/ largest number index in array

    cout << "Largest number index : " << largest_index << endl;
    cout << "Smallest number index : t : " << smallest_index << endl;

    // Pass by reference
    int arr[3] = {1, 2, 3};

    changeArr(arr, 3);

    cout << "in main\n";
    for (int i = 0; i < 3; i++) {
        cout << arr[i] << " ";
    } 
    cout << endl;

    // Linear Search Algorithm
    int arr1[6] = {5, 15, 22, 1, -15, 24};
    int s = linearSearch(arr1, 6, 1);
    if(s != -1) {
        cout << "Target element index is: " << s;
    } else {
        cout << "Target element is doesn't exist " << endl;
    }

    // Reverse an Array
    reverseArray(arr1, 6);
    for (int i = 0; i < 5; i++) {
        cout << arr1[i] << " ";
    }
    cout << endl;
    
    //  Sum & Product of all numbers in array
    sumproduct(arr1, 6);

    // Swap the max & min number of an array
    maxminSwap(arr1, 6);
    for (int i = 0; i < 6; i++) {
        cout << arr1[i] << " ";
    }
    cout << endl;

    // Unique values in array
    int ar[6] = {5, 5, 22, 1, -15, 2};

    cout << "Unique values in array: ";
    for (int i = 0; i < 6; i++) {
        int count = 0;
        for (int j = i+1; j < 6; j++) {
            if(ar[i] == ar[j]) {
                count++;
            }
        }
        if(count == 0) {
            cout<< ar[i] << " ";
        }
    }
    cout<< endl;

    // Intersection of 2 array

    // int arr1[6] = {5, 15, 22, 1, -15, 24};
    int arr2[6] = {5, 95, 42, 1, -15, 124};

    for (int i = 0; i < 6; i++) {
        int count = 0;
        for (int j = 0; j < 6; j++) {
            if(arr1[i] == arr2[j]) {
                count++;
            }
        }
        if(count != 0) {
            cout<< arr1[i] << " ";
        }
    }

    return 0;
}