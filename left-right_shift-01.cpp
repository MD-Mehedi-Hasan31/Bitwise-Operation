#include <iostream>

using namespace std;

int main()
{

    int n,x,m,f;

    cout<<"---- Enter 0 or 1 ----"<<endl;
    cout<<"0 - Left  Shift"<<endl;
    cout<<"1 - Right Shift"<<endl;
    cin>>f;
    if(f==0){
        //left shift
        while(1)
        {
            cout<<"Please  enter  your number: ";
            cin>>n;
            if(n==0)
            {
                break;
            }
            cout<<"How many bits  you want  to shift left: ";
            cin>>x;

            m=n<<x;
            cout<<"Result is: "<<m<<endl;
        }
    }else
    {
    //Right shift
          while(1)
        {
        cout<<"Please  enter  your number: ";
        cin>>n;
        if(n==0)
        {
            break;
        }
        cout<<"How many bits  you want to shift Right: ";
        cin>>x;

        m=n>>x;
        cout<<"Result is: "<<m<<endl;
    }
}
    return 0;
}
