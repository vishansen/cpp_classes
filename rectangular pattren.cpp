/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main ()
{
        int n,m;
        cin>>n>>m;
         for ( int i=1 ; i<=n ; i++)
         {
             for (int j=1 ; j<=m ; j++){
                 if ( i==1 || j==1 || i==n || j==m)
                 {
                     cout<<"*";
                 }
                 else{
                     cout<<" ";
                 }
             }
             cout<<endl;
         }

    return 0;
}
