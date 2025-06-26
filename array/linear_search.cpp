#include<iostream>
using namespace std;

int main(){
    int arr[]= {4,2,7,8,1,2,5};
    int k=0;
    int count=0;

    for(int i=0; i<7; i++){
        if(arr[i]==k){
            cout<<"desired element was found at "<<i<<endl;
            count++;
        }
    }
    
    if(count==0)
    cout<<"element is not present in the array"<<endl;

    return 0;
}