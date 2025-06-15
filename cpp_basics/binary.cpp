#include<iostream>
using namespace std;

string binary(int n){
    string num=" ";
    while(n>0){
        num= to_string(n%2)+num;
        n=n/2;
    }

    return num;
}

int main(){
    int x;
    cout<<"enter a number: ";
    cin>>x;
    string val= binary(x);

    cout<<"Binary of "<<x<<" is: "<<val<<endl;

    return 0;
}