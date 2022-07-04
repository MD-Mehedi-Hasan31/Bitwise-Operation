#include<iostream>

using  namespace std;

int main()
{
    int num1,num2,num3,a;
    cout<<"---- Enter 0 or 1 ----"<<endl;
    cout<<"0 - OR"<<endl;
    cout<<"1 - AND"<<endl;
    cin>>a;

    if(a==0)
    {
        while(1)
        {
            cout<<"Please insert num1 and num2 value: "<<endl;
            cin>>num1>>num2;
            num3=num1|num2;

            cout<<"The Result of OR operation Is: "<<num3<<endl;
        }

    }
    else
    {
        while(1)
        {
            cout<<"Please insert num1 and num2 value: "<<endl;
            cin>>num1>>num2;
            num3=num1&num2;

            cout<<"The Result of AND operation Is: "<<num3<<endl;
        }
    }



    return 0;
}
