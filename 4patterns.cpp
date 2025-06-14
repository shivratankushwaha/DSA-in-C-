#include<iostream>
using namespace std;

int main() {

// Patterns

// Square Pattern
    // 1 2 3 4
    // 1 2 3 4
    // 1 2 3 4
    // 1 2 3 4

    int n;
    cin >> n;
    for(int i=1; i<=n; i++) {       // outer
        for(int j=1; j<=n; j++) {       // inner
            cout << j << " ";
        }
        cout << endl;
    }
    cout << endl;

    // * * * *
    // * * * *    
    // * * * *
    // * * * *

    for(int i=0; i<=n-1; i++) {       // outer (1 to n) Or (0 to n-1)
        for(int j=0; j<=n-1; j++) {       // inner (1 to n) Or (0 to n-1)
            cout << "*" << " ";
        }
        cout << endl;
    }
    cout << endl;

    // A B C D
    // A B C D
    // A B C D
    // A B C D

    
    for(int i=0; i<n; i++) {    // outer loop

        char ch='A';            // loop char rest to 'A'
        // 'A' rest in every next line
        for(int j=0; j<n; j++) {       // inner loop => line start
            cout << ch << " ";
            // ch = ch + 1;                // char = char + int 
            // (if char is 'A' then ascii value is 65, 66 = 65 + 1; char of 66 ascii vale is B. Values add in integer form but return in character form) 
            ch++;
        }
        cout << endl;
    }
    cout << endl;

    // 1 2 3
    // 4 5 6
    // 7 8 9

    
    int d = 1;      // d is not rest in next line
    for(int i=0; i<n; i++) {    // outer loop

        for(int j=0; j<n; j++) {
            cout << d << " ";
            d++;
        }
        cout << endl;
    }
    cout << endl;

    // A B C
    // D E F
    // G H I

    char cha='A';
    for(int i=0; i<n; i++) {    // outer loop

        for(int j=0; j<n; j++) {
            cout << cha << " ";
            cha++;
        }
        cout << endl;
    }
    cout << endl;

// Triangle Pattern
    // *
    // * *
    // * * *
    // * * * *

    for(int i=0; i<n; i++) {

        for(int j=0; j<i+1; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;

    // 1
    // 2 2
    // 3 3 3
    // 4 4 4 4

    for(int i=0; i<n; i++) { 

        for(int j=0; j<i+1; j++) {
            cout << (i+1) << " ";
        }
        cout<< endl;
    }
    cout<< endl;

    // A
    // B B
    // C C C
    // D D D D

    char chh = 'A';
    for(int i=0; i<n; i++) { 

        for(int j=0; j<i+1; j++) {
            cout << chh << " ";
        }
        chh++;
        cout<< endl;
    }
    cout<< endl;

    // 1
    // 1 2
    // 1 2 3
    // 1 2 3 4

    for(int i=0; i<=n-1; i++) {
        for(int j=1; j<=i+1; j++) {
            cout << j << " ";
        }
        cout<< endl;
    }
    cout<< endl;

// Backword loop
    for(int i=n; i>0; i--) {
        cout<< i << " ";
    }
    cout<< endl;

// Reverse Triangle Pattern
    // 1
    // 2 1
    // 3 2 1
    // 4 3 2 1

    for(int i=0; i<n; i++) {
        // for(int j=i+1; j>=0; j--) {
        for(int j=i+1; j>0; j--) {
            cout << j << " ";
        }
        cout<< endl;
    }
    cout << endl;

    // A
    // B A
    // C B A
    // D C B A

    for(int i=0; i<n; i++) {

        char hh = i+'A';
        for(int j=i+1; j>0; j--){
            cout << hh << " ";
            hh--;
        }
        cout<< endl;
    }
    cout<< endl;

// Floyd's Triangle Pattern
    // 1
    // 2 3
    // 4 5 6
    // 7 8 9 10

    int num = 1;
    for(int i=0; i<n; i++) {
        // for(int j=i+1; j>0; j--){    //backward -> i+1
        for(int j=0; j<i+1; j++) {
            cout << num << " ";
            num++;
        }
        cout<< endl;
    }
    cout<< endl;    

    // 1
    // 3 2
    // 6 5 4
    // 10 9 8 7

    // int numb = 1;
    // for(int i=0; i<n; i++) {
    //     for(int j=i+1; j>0; j--) {
    //         cout << numb << " ";
    //         numb++;
    //     }
    //     cout<< endl;
    // }
    // cout<< endl;

    // A
    // B C
    // D E F
    // G H I J

    char cc = 'A';
    for(int i=0; i<n; i++) {
        for(int j=1; j<=i+1; j++) {
            cout << cc << " ";
            cc++;
        }
        cout<< endl;
    }
    cout<< endl;

// Inverted Triangle Pattern
    // 1 1 1 1
    //   2 2 2
    //     3 3
    //       4 

    for(int i=0; i<n; i++){

        for(int j=0; j<i; j++) {
            cout<< " ";
        }

        for(int k=0; k<n-i; k++){
            cout<< (i+1);
        }
        cout<< endl;
    }
    cout<< endl;

    // 1 1 1 1
    //  2 2 2
    //   3 3
    //    4 

    for(int i=0; i<n; i++){

        for(int j=0; j<i; j++) {
            cout<< " ";
        }

        for(int k=0; k<n-i; k++){
            cout<< (i+1)<<" ";
        }
        cout<< endl;
    }
    cout<< endl;

    // A A A A
    //   B B B
    //     C C
    //       D
    
    char chha = 'A';
    for(int i=0; i<n; i++){

        for(int j=0; j<i; j++) {
            cout<< " ";
        }

        for(int k=0; k<n-i; k++){
            cout<< chha;
        }
        chha++;
        cout<< endl;
    }
    cout<< endl;

// Pyramid pattern
    //       1
    //     1 2 1
    //   1 2 3 2 1
    // 1 2 3 4 3 2 1

    for(int i=0; i<n; i++) {

        // space: n-i-1
        for(int j=0; j<n-i-1; j++) {  
            cout<< " ";
        }

        // num1: i=1
        for(int k=1; k<=i+1; k++) {   
            cout<< k;
        }

        // num2 backword loop
        // for(int m=0; m>=i-1; m--) {
        for(int m=i; m>0; m--) {    
            cout<< m; 
        }
        cout<< endl;
    }
    cout<< endl;

// Hollow Diamond pattern
    //       * 
    //     *   * 
    //   *       * 
    // *           *
    //   *       * 
    //     *   * 
    //       *

    //top
    for(int i=0; i<n; i++) {

        // outer space: n-i-1
        for(int j=0; j<n-i-1; j++) {  
            cout<< " ";
        }

        cout<<"*";

        if(i != 0) {

            // inner space: 2*i-1
            for(int j=0; j<2*i-1; j++) {
                cout<< " ";
            }

            cout << "*";
        }
        cout << endl;
    }

    // bottom
    for(int i=0; i<n-1; i++) {      //0 to n-2

        // outer space
        for(int j=0; j<i+1; j++) {  
            cout<< " ";
        }

        cout << "*";

        if(i!=n-2) {

            // inner space
            for(int j=0; j<2*(n-i)-5; j++) {        //2*(n-2-i)-1
                cout<< " ";
            }

            cout<< "*";
        }
        cout<< endl;
    }
    cout<< endl;

// Butterfly Pattern
    // *      *
    // **    **
    // ***  ***
    // ********
    // ********
    // ***  ***
    // **    **
    // *      *

    //top
    for(int i=0; i<n; i++) {

        // left side stars 
        for(int j=0; j<i+1; j++) {
            cout<< "*";
        }

        // space
        if(i != n-1 ) {
            // for(int j=0; j<n-i-1; j++) {
            //     cout<< " ";
            // }        

            // for(int j=n-i; j>1; j--) {
            //     cout<< " ";
            // }

            for(int j=0; j<2*(n-i-1); j++) {
                cout<< " ";
            }
        }

        // right side stars
        for(int j=i+1; j>0; j--) {
            cout<< "*";
        }
        cout<<endl;
    }

// Bottom
    for(int i=0; i<n; i++) {

         // left side stars 
        for(int j=n-i; j>0; j--) {
            cout<< "*";
        }

        // space
        if(i != 0 ) {

            // for(int j=i; j>0; j--) {
            //     cout<< " ";
            // }        

            
            //     for(int j=0; j<i; j++) {
            //     cout<< " ";
            // }

            for(int j=0; j<2*i; j++) {
                cout<< " ";
            }
        }

        // right side stars
        for(int j=0; j<n-i; j++) {
            cout<< "*";
        }
        cout<<endl;       
    }

    return 0;
}