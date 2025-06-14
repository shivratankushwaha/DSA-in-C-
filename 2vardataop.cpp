#include <iostream>
using namespace std;

int main() {
// cout in c++ & next line
    cout << "hello world\n from shiv"<<endl<<"shiv"<<"\n";
    cout << "hello world " << "shiv"<<"\n";
    cout << "shivratan\n"<<"kushwaha" << endl;

//variables
// Data Types
    int age = 25;
    cout << age << endl;
    cout << sizeof(age) << endl;

    char grade = 'A';
    cout << grade << endl;
    cout << sizeof(grade) << endl;

    float PI = 3.14f;
    cout << PI << endl;
    cout << sizeof(PI) << endl;

    bool issafe = true;
    cout << issafe << endl;
    cout << sizeof(issafe) << endl;

    double distance = 12345.6789;
    cout << distance << endl;
    cout << sizeof(distance) << endl;

// Type Casting
    // 1. Implicit Type Casting
    char gradee = 'A';
    int value = gradee;
    cout << value << endl;

    // 2. Explicit Type Casting
    double price = 100.99;
    int newPrice = (int)price;
    cout << newPrice << endl;

// Input in C++
    int agee;
    cout << agee << endl;    //random/default value print of agee variable store
    cout << "Enter the age : ";
    cin >> agee;
    cout << "Your age is : " << agee << endl;

// Operators

// Arithmetic Operators
    int a = 10, b = 5;
    
    cout << "sum = " << (a+b) << endl;  // Addition
    cout << "sub = " << (a-b) << endl;  // Subtraction
    cout << "mul = " << (a*b) << endl;  // Multiple
    cout << "div = " << (a/b) << endl;  // Divide
    cout << "mod = " << (a%b) << endl;  // Modulus

// int/int => int
    cout << (5/2) << endl;

// int/float => float
    int c = 5;
    float d = 2;
    cout << (c/d) << endl;

// int/double => double (by type casting)
    cout << (5 / (double)2) << endl;

// int <= int/double
    int ans = (5 / (double)2);
    cout << ans << endl;    // integer vlaue

// Assignment Operators
    int x = 2;
    int y;

    cout << (y = x) << endl;        // Assignment -> (y = x)
    cout << (x += y) << endl;       // Addition Assignment -> (x = x + y)
    cout << (x -= y) << endl;       // Subtraction Assignment -> (x = x - y)
    cout << (x *= y) << endl;       // Multiplication Assignment -> (x = x * y)
    cout << (x /= y) << endl;       // Division Assignment -> (x = x / y)
    cout << (x %= y) << endl;       // Modulus Assignment -> (x = x % y)

// Relational / Comparison Operators
    cout << (3 == 3) << endl;       // Equql to
    cout << (3 != 3) << endl;       // Not equql to
    cout << (3 > 4) << endl;       // Greater than
    cout << (3 < 4) << endl;       // Less than
    cout << (3 >= 3) << endl;       // Greater than or Equql to
    cout << (3 <= 2) << endl;       // Less than or Equql to

// Logical Operators
    cout << ((3 == 3) && (3 != 3)) << endl;       // Logical AND
    cout << ((3 == 3) || (3 != 3)) << endl;       // Logical OR
    cout << !(3 != 3) << endl;                    // Logical Not

// Sum of 2 number
    int k, o;
    cout << "Enter a : ";
    cin >> k;
    cout << "Enter b : ";
    cin >> k;
    cout << "Sum of a & b : " << (k+o) << endl;

// Unary Operators

    int h = 10;
    cout << "Initial value of x: " << h << endl;

    // Increment (++)
    cout << "Using prefix increment: " << ++h << endl; // x becomes 11
    cout << "Using postfix increment: " << h++ << endl; // x is 11, then becomes 12

    // Decrement (--)
    cout << "Using prefix decrement: " << --h << endl; // x becomes 11
    cout << "Using postfix decrement: " << h-- << endl; // x is 11, then becomes 10

    cout << "Final value of x: " << h << endl; // x is 10

// Calculator
    int w, q;
    cout << "Enter a : ";
    cin >> w;
    cout << "Enter b : ";
    cin >> q;
    cout << "Sum of a & b : " << (w+q) << endl;
    cout << "Sub of a & b : " << (w-q) << endl;
    cout << "Mul of a & b : " << (w*q) << endl;
    cout << "Div of a & b : " << (w/q) << endl;
    cout << "Mod of a & b : " << (w%q) << endl;

    return 0;
} 
//Boilerplate code - comment