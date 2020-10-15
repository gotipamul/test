#include <iostream>
#include<iomanip>
using namespace std;
int main() {
    double c;
    int x;
      cin>>x>>c;
      if(x<(int)c)
      {
        if(x%5==0)
        {
           cout<<fixed<<setprecision(2)<<c-x-0.5<<endl;
        }
        else
        {
        cout<<fixed<<setprecision(2)<<c<<endl;
        }
      }
	    else
	    {
	        cout<<fixed<<setprecision(2)<<c<<endl;
	    }
	    
	   
	return 0;
}
