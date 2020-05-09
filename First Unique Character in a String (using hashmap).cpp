class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> m;
        for(auto x:s)
        {
            m[x]++;
        }
        int i=0;
        for(auto x:s)
        {
            i++;
            if(m[x]==1)
                return i-1;
               
        }
        
         return -1;
    }
};
