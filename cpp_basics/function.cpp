#include<iostream>
using namespace std;

int add(int a, int b){
    int sum= a+b;
    return sum;
}
int main(){
    int x=5, y=7;
    cout<<add(x,y)<<endl;
    
    return 0;
}