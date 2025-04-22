#include <bits/stdc++.h>
using namespace std;

int returning_smth(vector<int> nums, int target){
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n; j++){
            if(nums[i]+ nums[j]==target){
                return i;
            }
            }
    }
    return -1; 
}

int main(){

    return 0;
}