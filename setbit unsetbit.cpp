#include <iostream>

using namespace std;

int main()
{
  int n,i;
  cin>>n>>i;
  if(n&(1<<i))
  {
      cout<<"set"<<endl;
  }
  else
  {
      cout<<"unset"<<endl;
  }
}
