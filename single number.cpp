class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int a=0;
        for(int x:nums)
        {
            a=a^x;
        }
        return a;
        
    }
};
