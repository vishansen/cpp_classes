#include<iostream>
using namespace std;
int main(){
   
  for(int i=1 ;i<=4 ;i++)
  {
      for(int k=1;k<=i-1;k++){
          cout<<" ";
      }
      for (int j=4 ;j>=i ; j--){
          cout<<i;
          
      }
      cout<<endl;
      
  }
  
}
