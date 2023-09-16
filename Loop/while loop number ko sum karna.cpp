/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int n ;
    cin>>n;
    int sum = 0 ; //sum me store hoga 
    int i = 1 ; // loop ke liye variable ( kaha se chalqnq h)
    while ( i<=n) // condition check karega 
    {
        sum+=i;   // sum = sum + i ( ase bhi likh skte hai
        i++ ;      // uodating loop variable
    }
        cout<<sum<<endl;
    

    return 0;
}
