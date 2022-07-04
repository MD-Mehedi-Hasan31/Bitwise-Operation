#include<iostream>

using  namespace std;

char to_upper(char ch){

    return ch &95;
}

char to_lower(char ch){

    return ch | 32;
}

int main(){

    cout<<to_lower('A')<<endl;
    cout<<to_upper('a')<<endl;

    return 0;
}
