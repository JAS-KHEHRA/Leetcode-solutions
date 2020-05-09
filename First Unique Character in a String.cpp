class Solution {
public:
    int firstUniqChar(string s) {
        int a['z'-'a'+1]={0};
        for(char x:s)
        {
            a['z'-x]++;
        }
        for(int i=0;i<s.size();i++)
        {
            
            if(a['z'-s[i]]==1)
                return i;
        }
        
         return -1;
    }
};
