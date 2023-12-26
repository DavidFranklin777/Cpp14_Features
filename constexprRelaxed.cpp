

C++14 relaxed the restrictions on constexpr functions, allowing them to contain more complex logic. Prior to C++14, constexpr functions were quite limited in what they could contain.

C++11 Example (limited constexpr):

constexpr int factorial(int n) {
    return (n <= 1) ? 1 : (n * factorial(n - 1)); // Recursive approach
}


// we could only use one single line for constexpr functions, however in C++14, you can have a more relaxed approach

// constexpr forces the compiler to evaluate the expression/ variable or a function at compile time if possible provided they are constants
/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>

using namespace std;

constexpr int factorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i; // Loop now allowed in C++14
    }
    return result;
}


int main()
{
    
    cout << "Factorial : " << factorial(4) << endl;


    return 0;
}