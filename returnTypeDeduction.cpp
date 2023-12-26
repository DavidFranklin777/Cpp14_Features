/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

// Basically we can use an auto return type for a function

#include <bits/stdc++.h>

using namespace std;

auto autoFunc(const int& x, const int&y)
{
    return x*y;
}



int main()
{
    cout << autoFunc(3,6) << endl;
    return 0;
}