#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int i=0,sum=0;
    while(n!=0){
        int d=n%10;
        sum=sum*10+d;
        n=n/10;
    }
cout<<sum<<endl;
    return 0;
}
