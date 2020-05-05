class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> s;
        for(int x:nums)
        {
            s.insert(x);
        }
        int n= s.size();
        nums.resize(0,n);
        
        for(int x:s)
        {
            nums.push_back(x);
        }
        for(int x:nums)
        {
            cout<<x;
        }

        return n;
    }
};
