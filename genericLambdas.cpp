Generic lambdas in C++14 allow the use of auto in their parameter list, 
enabling them to accept arguments of any type. Here's a simple example:

Note that in C++20, you can use auto keyword to parameters within a function

/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    auto genericLambdas = 
    [](auto a, auto b)
    {
        return a+b;
    };
    
    cout << "genericLambdas int: " << genericLambdas(4,5) << endl;
    cout << "genericLambdas string: " << genericLambdas(string("Hello "),string("Lambdas")) << endl;


    return 0;
}