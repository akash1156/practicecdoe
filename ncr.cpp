#include <iostream>

using namespace std;
int fact(int num){
    int ans=1;
    for(int i=1;i<=num;i++){
        ans=ans*i;
    }
    return ans;
}
int main()
{
   int n,r;
   cin>>n>>r;
   int answer=0;
   answer=fact(n)/(fact(r)*fact(n-r));
   cout<<answer<<endl;
    return 0;
}

