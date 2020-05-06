class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
        for(int i=n-1;i>=0;i--)
        {
            if(digits[i]!=9)
            {
                digits[i]++;
                return digits;
            }
            else{
                digits[i]=0;
            }
        }
        digits.resize(n+1);
        digits[0]=1;
        return digits;
        
    }
};
