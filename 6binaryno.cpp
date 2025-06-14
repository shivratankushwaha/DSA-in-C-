#include<iostream>
using namespace std;

int DecimalToBinary(int n) {

    int rem, pow = 1, ans = 0;
    while(n>0) {
        rem = n%2;
        n /= 2;
        ans += rem * pow;
        pow *= 10;
    }

    return ans;
}

int BinaryToDecimal(int n) {

    int rem, pow = 1, ans = 0;

    while(n>0) {

        rem = n%10;
        n /= 10;

        ans += (rem*pow);
        pow *= 2;
    }

    return ans;
}

int main() {

    int n = 10;

    // cout << "Enter Decimal value: ";
    // cin >> n;

    for(int i = 1; i <= 10; i ++) {

        cout << "Decimal value: " <<  + i << " Binary value: " << + DecimalToBinary(i) << endl; 
    }

    // cout << "Binary vaule: " << + DecimalToBinary(n);

    cout << "Enter binary number: ";
    cin >> n;

    cout << "Decimal number: "<< BinaryToDecimal(n);


    return 0;
}