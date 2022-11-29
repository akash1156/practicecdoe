#include <iostream>

using namespace std;
bool iseven(int num){
    if(num%2==0)
    return 1;
    else
    return 0;
}

int main()
{
    int n;
    cin>>n;
    if (iseven(n))
    cout<<"Number is even"<<endl;
    else
    cout<<"number is odd"<<endl;

    return 0;
}
