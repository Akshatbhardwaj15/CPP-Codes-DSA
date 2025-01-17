#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> sortArrayByParity(vector<int> &nums)
    {
        int i = 0;
        int j = nums.size() - 1;

        while (i < j)
        {
            while (i < j and nums[i] % 2 == 0)
            {
                i++;
            }
            while (i < j and nums[j] % 2 == 1)
            {
                j--;
            }
            swap(nums[i], nums[j]);
        }
        return nums;
    }
};


//METHOD 2

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> result;
        for(int i = 0; i < nums.size(); i++) if(nums[i] % 2 == 0) result.push_back(nums[i]);
        for(int i = 0; i < nums.size(); i++) if(nums[i] % 2 == 1) result.push_back(nums[i]);
        return result;
    }
};