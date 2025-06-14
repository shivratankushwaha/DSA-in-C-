#include<iostream>
using namespace std;

int main() {

// Conditional Statement

// if
    // Check Number is postive
    int a = 45;
    if(a >= 0) {
        cout << "postive\n";
    }

//if-else
    // Check vote program
    int age;
    cout << "Enter your age : ";
    cin >> age;
    if(age >= 18) {
        cout << "You can VOTE.\n";
    } else {
        cout << "You cannot VOTE.\n";
    }

    // Check number is Even & Odd
    int n;
    cout << "Enter a number : ";
    cin >> n;
    if( n % 2 == 0 ) {
        cout << "Given number is Even.\n";
    } else {
        cout << "Given number is Odd.\n";
    }

// else-if
    // Check Grades
    int marks;
    cout << "Enter Your Marks : ";
    cin >> marks;
    if ( marks >= 90) {
        cout << "Your grade : A\n";
    } else if ( marks >= 75 && marks < 90) {
        cout << "Your grade : B\n";
    } else if ( marks >= 60 && marks < 75) {
        cout << "Your grade : C\n";
    } else if ( marks >= 45 && marks < 60) {
        cout << "Your grade : D\n";
    } else if ( marks >= 33 && marks < 45) {
        cout << "Your grade : E\n";
    } else {
        cout << "Your grade : F\n";
    }

    // Check character lowercase or uppercase
    char ch;
    cout << "Enter your character : ";
    cin >> ch;
    // if (ch >= 'A' && ch <= 'Z') {
    if (ch >= 65 && ch <= 90) {         // ASCII code of 'A' & 'Z' 
        cout << "Given Character is in Uppercase.\n";
    // } else if (ch >= 'a' && ch <= 'z') {
    } else if (ch >= 97 && ch <= 122) {         // ASCII code of 'a' & 'z'
        cout << "Given Character is in Lowercase.\n";
    } else {
        cout << "Enter character is wrong.";
    }

// Ternary Statement

    // Postive & negtive
    int x;
    cout << "Enter your number : ";
    cin >> x;
    cout << (x >= 0 ?  "Postive" : "negtive") << endl;

// Loops

// while loop
    // print number 1 to n
    int i=1, y;
    cout << "Enter your number : ";
    cin >> y;
    while ( i <= y )
    {
        // cout << i << endl;           // Vertical line
        cout << i << " ";               // Horizontal line
        i++;
    }
    cout << endl;

    // Sum of numbers from 1 to n
    int wu = 50, wsum = 0, io=1;
    while(io<=wu) {
        wsum += io;
        io++;
    }
    cout << "Sum : " << wsum << endl;    

    // Sum of all Odd numbers from 1 to N
    int we = 50, woddSum = 0, wi = 1;
    while(wi<=we) {
        if(wi % 2 != 0) {
            woddSum += i;
        }
        wi++;
    }
    cout << "Sum : " << woddSum << endl;

// For loop
    // print number 1 to n
    for(int i = 0; i <= y; i++ ) {
    // for(int i=0, j=1; i<=y &&/|| y<=10; i++, j+2 ) {
        cout << i << " ";
    }
    cout << endl;

    // Sum of numbers from 1 to n
    // int i, j=1, s;
    // cout << "Enter your number : ";
    // cin >> s;
    // for(i = 0; i <= s; i++ ) {
    //     i = i + j;
    //     cout << j << "+" << i;
    // }
    // cout << "Sum of the numbers are : " << i << endl;

    int u = 50, sum = 0;
    for(int i=1; i<=u; i++) {   // 1+2+3+4+5+6+7+8+.....
        sum += i;
        if(i == 5) {            // 1+2+3+4+5
            break;              // break -> keyword
        }
    }
    cout << "Sum : " << sum << endl;    // 1+2+3+4+5 -> 15

    // Sum of all Odd numbers from 1 to N
    int e = 50, oddSum = 0;
    for(int i=1; i<=e; i++) {
        if(i % 2 != 0) {
            oddSum += i;
        }
    }
    cout << "oddSum : " << oddSum << endl;

    // Sum of all Even numbers from 1 to N
    int o = 50, evenSum = 0;
    for(int i=1; i<=o; i++) {
        if(i % 2 == 0) {
            evenSum += i;
        }
    }
    cout << "evenSum : " << evenSum << endl;

// do while loop
    // Print the number 1 to N
    int ber = 10, it=1;
    do {
        cout << it << " ";
        it++;
    } while (it<=ber);
    cout << endl;

    // Check if a number is Prime or Not
    int che;
    bool isPrime = true;
    cout << "Enter a Number : ";
    cin >> che;
    if(che == 1) {
        cout << "Enter Number is Prime NUmber";
    } else {
        // for(int count = 2; count < che; count++) {
        for(int count = 2; count*count <= che; count++) {
            if(che%count == 0) {
                isPrime = false;
                break;
            }
        }
        if(isPrime == false) {
            cout << "Enter Number is NOT a Prime NUmber";
        } else {
            cout << "Enter Number is Prime NUmber";
        }
    }

// Nested Loops

    int td = 5, fd = 5;
    for(int i=1; i<=td; i++) {
        for(int j=1; j<=fd; j++) {
            cout << "*";
        }
        cout << endl;
    }

    // Sum of all number from 1 to N which are divisible by 3
    int numb, cou = 0;
    cout << "Enter a Number : ";
    cin >> numb;
    // for(int i = 1; i <= numb; i++){
    //     if(i%3 == 0){
    //         cou += i;
    //     }
    // }
    // cout << "Sum of all number which are divisible by 3 is "<< cou <<endl;
    int con =1;
    while (con <= numb)
    {
        if(con%3 == 0){
            cou += i;
        }
        con ++;
    }
    cout << "Sum of all number which are divisible by 3 is "<< cou <<endl;

    // Print Factorial of a number N
    int nu, fact = 1;
        cout << "Enter a Number : ";
        cin >> nu;
    for(int i = 1; i <= nu; i++){
        fact *= i;
    }
    cout << "Factorial : " << fact << endl; 
    
    return 0;
}