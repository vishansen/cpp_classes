#include <iostream>

using namespace std;

int main()
{
   char ch = 'a' ;
   for (int i=1 ; i<=5 ;i++)
       {    
           for(int j=1 ; j<=5 ;j++){
         if (i%2==0)
         {
             cout<<'b';}
        else{
            cout<<'a';
        }
         }
         cout<<endl;
          
       }
    return 0;
}
