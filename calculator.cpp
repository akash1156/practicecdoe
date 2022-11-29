
#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cin>>a;
    cin>>b;
    int choice;
    cin>>choice;
    switch(choice){
        case 1:
        cout<<a+b<<endl;
        break;
        case 2: 
        cout<<a-b<<endl;
        break;
        case 3:
        cout<<a*b<<endl;
        break;
        case 4:
        cout<<a/b<<endl;
        break;
        case 5:
        cout<<a%b<<endl;
        break;
        default :
        cout<<"Enter a valid choice"<<endl;
        
    }

    return 0;
}
