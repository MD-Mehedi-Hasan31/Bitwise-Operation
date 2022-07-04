#include <iostream>

using namespace std;

int main()
{

    int y,x;
    cout<<"Please insert a value for x: ";
    cin>>x;

    //left shift
    y=x<<2;
    cout<<"the  result of the  left  shift is: : "<<y<<endl;

    //right shift
    y=x>>2;
    cout<<"The result  of  the  right  shift is: "<<y;


    return 0;
}
