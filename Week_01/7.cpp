class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int i = digits.size() - 1;
        for(; i >= 0; --i)
        {
            if(digits[i] + 1 < 10)
            {
                digits[i] = digits[i]+1;
                break;
            }
            else
            {
                digits[i] = 0;
                
            }
            
        }
        if(digits[0] == 0)
        {
           digits.insit(digits.begin(),1);
        }
        return digits;
    }
};