// Remove Duplicates from Sorted Array

// Solution Link: https://leetcode.com/explore/interview/card/top-interview-questions-easy/92/array/727/

//Solution


class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        int count = 0;
        if(nums.size() >= 1)
        {
        int current = nums[0];
        int dub = 1;
        count = 1;
        
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]!=current)
            {
                nums[dub] = nums[i];
                dub++; count++;
                current = nums[i];
            }
        }
        }
        return count;
    }
};