// Range Sum Query - Immutable

// Solution Link: https://leetcode.com/problems/range-sum-query-immutable/description/

// Solution


class NumArray {
public:
    vector<int> sums;
    vector<int> num2;
    NumArray(vector<int> nums) 
    {
        if(nums.size()>=1)
        {
           sums.resize(nums.size());
        num2.resize(nums.size());
           sums[0] = nums[0];
        num2[0] = nums[0];
           for(int i=1;i<nums.size();i++)
           {
               num2[i] = nums[i];
               sums[i] = sums[i-1] + nums[i];
           }
        }
    }
    
    int sumRange(int i, int j) 
    {
        return (sums[j] - sums[i] + num2[i]);
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray obj = new NumArray(nums);
 * int param_1 = obj.sumRange(i,j);
 */