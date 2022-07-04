#include<iostream>

using namespace std;

int main()
{

    int n;

    while(1)
    {
        cout<<"Insert a Value: ";
        cin>>n;

        if(n==-1){
        break;
        }
        else{
        if(n&1)
        {
            cout<<"Odd"<<endl;
        }
        else
        {
            cout<<"Even"<<endl;
        }
    }
    }
    return 0;
}
