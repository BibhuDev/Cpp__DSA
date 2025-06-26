#include<iostream>
using namespace std;

int main(){
    int arr[]= {5, 15, 28, 1, -15, 24};
    int max= arr[0];
    int min= arr[0];

    for(int i=0; i<6; i++){
        if(max<arr[i])
        max=arr[i];
    }
    for(int i=0; i<6; i++){
        if(min>arr[i])
        min=arr[i];
    }

    cout<< "Maximum value in the array is "<<max<< endl;
    cout<< "Minimum value in the array is "<<min<< endl;

    return 0;
}