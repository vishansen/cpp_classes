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
    // 1 se 10 tk odd number ko sum karo
   // int n ;
   // cin>>n;
    int sum = 0 ; //sum me store hoga 
    int i = 1 ; // loop ke liye variable ( kaha se chalqnq h)
    while ( i<=9) // condition check karega 
    {
        sum = sum+i;
        i+=2 ;      // uodating loop variable
    }
        cout<<sum<<endl;
    

    return 0;
}
