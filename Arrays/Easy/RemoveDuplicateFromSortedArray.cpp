#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        int j = 1;
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] != nums[i - 1])
            {
                // Swap nums[i] and nums[j] to maintain the order of non-duplicate elements.
                nums[j] = nums[i];
                j++;
            }
        }
        return j;
    }
};

int main(){
    return 0;
}