/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <tuple>

using namespace std;

// Base caseu to endu recursionu

void print()
{
    cout << endl;
}

template<typename T, typename... Args>
void print(T first, Args...args)
{
    cout << first << endl;
    print(args...);
}

int main()
{

    print(5, "shingpao", 5.334);

    return 0;
}
