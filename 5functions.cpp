#include<iostream>
using namespace std;

// Function defination
void printHello() {
    cout<< "Hello\n";
}

int ret() {
    cout<< "returns\n";
    return 3;
}

// Sum of Two number
int inSum(int a, int b) {
    int s = a+b;
    return s;
}
double doSum(double a, double b) {
    return a+b;
}

// Minimum between Two number
int min(int a, int b) {
    if(a < b) {
        return a;
    } else {
        return b;
    }
}

// Sum of number from 1 to N
int sumn(int a) {
    int j=0;
    for(int i=1; i<=a; i++) {
        j+=i;
    }
    return j; 
}

// N factorial
int fact(int n) {
    int m = 1;
    for(int i=1; i<=n; i++) {
        m*=i;
    }
    return m;
    cout << "hello\n";      // this line never print in screen because it write after the retrun statement.
}

// Function in  memory
void fun() {
    int x = 35;
    cout<< "x = " << x << endl;
}

// Return
int fuun() {
    return 2;
    cout<< "hello\n";
}

// Empty return
void fuunn() {
    return;     // this statement return control to main()
    // if(condn) {

    // } else if(condn) {
    //     return;     // this statement return control to main()
    // } else {

    // }
}

// Pass by value
int pass(int a, int b) {
    a = a + 10;
    b = b + 15;
    return a+b;
}

// Sum of digit of a number 
int digitSum(int num) {
    int sum = 0, i;
    while ( num > 0 ) {
        i = num % 10;
        sum = sum + i;
        num = num / 10;
    }
    return sum;
}

// nCr binominal coefficient for n or r //
int bio(int n, int r) {
    int nCr, i = 1, j = 1, k = 1, l;
    l = n - r;

    while(n>0) {
        i = i * n;
        n--;
    }
    while(r>0) {
        j = j * r;
        r--;
    }
    while(l>0) {
        k = k * l;
        k--;
    }

    nCr = i/(j*k);
    return nCr;
}

// Prime or not //
int prime(int n) {
    bool h = true;
    if (n == 1) {
        cout << "Prime number\n";
    } else {
        for(int i=2; i<n; i++) {
            if(n % i == 0) {
                h = false;
            }
        }
        if(h == false) {
            cout << "Not Prime number\n";
        } else {
            cout << "Prime number\n";
        }
    }
    return 0;
}

// Prime number 1 to N //
// int prin(int n) {
//     // int s;
//     for(int i=2; i<n; i++) {
//         if(n % i != 0) {
//             // s = i;
//             cout << (i) << " ";
//         }
//     }
//     cout<< endl; 
//     return 0;
// }   

void prin(int N) {
    cout << "Prime numbers from 2 to " << N << " are: " << endl;
    for (int num = 2; num <= N; num++) {
        bool isPrime = true;
        for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            cout << num << " ";
        }
    }
    cout << endl;
}


// Fibonacci
// int fib(int n) {
//     int su=0;
//     for(int i=0; i<=n; i++) {
//         su = su + i;
//         cout << su << " ";
//     }
//     cout<< endl;
//     return 0; 
// }

void fib(int N) {
    int a = 0, b = 1, next;
    cout << "Fibonacci numbers up to " << N << " are: " << endl;
    for (int i = 0; i < N; ++i) {
        if (i == 0) {
            cout << a << " ";
            continue;
        }
        if (i == 1) {
            cout << b << " ";
            continue;
        }
        next = a + b;
        a = b;
        b = next;
        cout << next << " ";
    }
    cout << endl;
}

int main() {
    
    int a = 5, b = 4;

// Function call/invoke
    printHello();
    // printHello();
    // printHello();
    // printHello();

    int val = ret();                // function assign return value in variable
    cout<< "val = "<< val <<endl;   // then print the function return value
    // cout<< "val = "<< ret() <<endl; // direct print the function return value 

    cout << "Sum of 10 & 5 is " << inSum(10, 5) << endl;
    cout << "Sum of 40 & 5 is " << inSum(40, 5) << endl;

    cout << "Sum of 342.23 & 5.45 is " << doSum(342.23, 5.45) << endl;

    cout<< "min = " << min(4,2) << endl;

    cout << "Sum of 1 to N: " << sumn(4) << endl;
    cout << "Sum of 1 to N: " << sumn(6) << endl;

    cout << "Factorial of N: " << fact(4) << endl;
    cout << "Factorial of N: " << fact(6) << endl;

    fun();
    // cout << x << endl;       // x exit in fun(), it dosen't exit in main() thats why it can't run 

    fuun();     // it not print "hello" bcuz fuction is return before the hello statement. 

    // cout << pass(a, b) << endl;
    // cout << a << endl;
    // cout << b << endl;

    // cout << digitSum(345) << endl;

    // cout << bio(a,b) << endl;

    prime(13);
    prin(7);
    fib(5);
    // cout << "The 5 th Fibonacci number is: "<< fib(5) << endl;

    return 0; 
}