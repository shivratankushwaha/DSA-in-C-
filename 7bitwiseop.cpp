#include<iostream>
using namespace std;

//Global variable
int x = 10;

void fun() {
    cout << x << endl;
}

int main() {

    int a = 4, b = 8;

    //Bitwise & (Bitwise AND Operator)
    cout << "a & b: ";
    cout << (a & b) << endl;

    //Bitwise | (Bitwise OR Operator)
    cout << "a | b: ";
    cout << (a | b) << endl;

    //Bitwise ^ (Bitwise XOR Operator)
    cout << "a ^ b: ";
    cout << (a ^ b) << endl;

    //Bitwise << (Bitwise Left Shift Operator)
    cout << "a << 1: ";
    cout << (a << 1) << endl;
    cout << "b << 2: ";
    cout << (b << 2) << endl;

    //Bitwise >> (Bitwise Right Shift Operator)
    cout << "a >> 1: ";
    cout << (a >> 1) << endl;
    cout << "b >> 2: ";
    cout << (b >> 2) << endl;

    // Overridding ()
    cout << "5 - 2 * 6: ";
    cout << (5 - 2 * 6) << endl;
    cout << "(5 - 2) * 6: ";
    cout << ((5 - 2) * 6) << endl;

    //Equal Precendence
    cout << "4 * 5 % 2: ";
    cout << (4 * 5 % 2) << endl;

    //Scope

    //Local Scope

    // if(3 > 1) {

    // } else {
    //     int x = 10;      // Local Variable
    // }

    // cout << x << endl;

    // for (int i = 0; i < 10; i++) // Local Variable
    // {
    //     int x = 0;       // Local Variable
    // }

    // cout << i << endl;

    //Global Scope

    fun();
    cout << x << endl;

    //Data Type Modifiers
    cout << "SIze of Int: " << sizeof(int) << endl;
    cout << "SIze of Long Int: " << sizeof(long int) << endl;
    cout << "SIze of Short Int: " << sizeof(short int) << endl;
    cout << "SIze of Long Long Int: " << sizeof(long long int) << endl;

    //Unsigned/signed
    unsigned int x = -10;       // it can't store 

    cout << x << endl;      // wrong value print
 
    return 0;
}