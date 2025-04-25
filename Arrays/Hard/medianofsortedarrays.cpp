#include <bits/stdc++.h>
using namespace std;

int medianSorted(int lower, int higher){
    if(lower>higher){
        // it means that there is more than 1 element. 
        int median = lower + (higher - lower) / 2;
        return median;
    }
    else
        return lower; 
}

int main(){
    int n1, n2;
    cin >> n1 >> n2;
    vector<int> arr1(n1);
    vector<int> arr2(n2);

    // taking the values
    for(int i = 0; i < n1; i++){
        cin >> arr1[i];
    }
    for(int i = 0; i < n2; i++){
        cin >> arr2[i];
    }
    // finding the median
    int lower = 0, higher = 0;
    return 0;
}