#include<iostream>

using namespace std;


    inline int findMax(int a, int b, int c){
        int max;
        if(a>b){
            if(a>c)
            max=a;
            else
            max=c;
        }
        else{
            if(b>c)
            max=b;
            else
            max=c;
        }

        return max;
    }

int main(){
    int a,b,c;

    cout<<"Enter 3 numbers: ";
    cin>>a>>b>>c;

    cout<<"Max of 3 nos is: "<<findMax(a,b,c)<<endl;

    return 0;
}