#include <iostream>

using namespace std;

int main()
{
    char ch;
   for(ch='a' ; ch<='z' ;ch++)
   {
       if(ch=='a' ||ch=='e' || ch=='i' || ch=='o' || ch=='u')
           continue;
           else
           {
               cout<<ch;
           }
   }

    return 0;
}
