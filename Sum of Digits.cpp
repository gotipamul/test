#include <iostream>  
using namespace std;  
int main()  
{  
int t;
cin>>t;    
while(t--)    
{    
int a=0;
cin>>a;
int sum=0;
while(a!=0)
{
    sum=sum+a%10;
    a=a/10;
}
cout<<sum<<endl;
}    
    
return 0;  
}  
