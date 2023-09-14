#include <iostream>

using namespace std;

int main()
{
   int n ,c=0 , rsb=0;
   cin>>n;
   while(n)
   {
     rsb= (n&-n);
     c++;
     n=n-rsb;
   }
   cout<<c;

	
}
