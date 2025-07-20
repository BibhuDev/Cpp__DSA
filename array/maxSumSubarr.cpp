#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int main(){
    int n= 7;
    int arr[7]= {3, -4, 5, 4, -1, 7, -8};

    int maxSum= INT_MIN;

    for(int st= 0; st<n; st++){
        int currSum=0;
        for(int end=st; end<n; end++){
            currSum+=arr[end];
            maxSum= max(maxSum, currSum);
        }
    }
    cout<< "maximum sum of subarr= "<< maxSum;
    return 0;
}


//kadane's algorithm:

// class Solution {
// public:
//     int maxSubArray(vector<int>& nums) {
//         int currSum= 0, maxSum= INT_MIN;
//         for(int val : nums){
//             currSum+= val;
//             maxSum= max(currSum, maxSum);
//             if(currSum<0){
//                 currSum=0;
//             }
//         }
//         return maxSum;
//     }
// };
