// First Bad Version

// Solution Link: https://leetcode.com/explore/interview/card/top-interview-questions-easy/96/sorting-and-searching/774/

//Solution


// Forward declaration of isBadVersion API.
bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) 
    {
        //Implement Binary Search
        int start = 0;
        int end = n;
        int mid = 0;
        while(start < end)
        {
            if((start+1) == end)
            {
                return end;
            }
            mid = start + (end-start)/2;
            if(isBadVersion(mid))
                end = mid;
            else
                start = mid;
        }
        return mid;
    }
};