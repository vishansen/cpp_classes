#include<iostream>
using namespace std;
int main()
{
	int n,flag=0;
	cin>>n;
	
	for(int i=2;i<n;i++)
	    if(n%i==0)
	    {
	    	flag=1;
	    	break;
		}
	if(flag=0)
	{
		cout<<"prime number";
		}	
		else
		{
			cout<<"not a prime number";
		}
}
