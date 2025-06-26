#include<iostream>
using namespace std;

int main(){
    int arr[]= {4,5,2,7,1,8,0};
    int cpyArr[7];

    for(int i=0; i<7; i++){
        cpyArr[i]=arr[7-i-1];
    }

    for(int i=0; i<7; i++){
        cout<< cpyArr[i] ; 
    }

    return 0;
}