class Solution {
public:
    bool isPalindrome(int x) 
    {
        int digit[100] = {};
        int i = 0;
        bool palindrone = false;
        int tempNum = x;
        

        if(x < 10 && x >= 0)
        {
            return true;
        }
        
        if(x < -10 && x < 0)
        {
            return false;
        }
        
        if(x < 0)
        {
            return false;
        }
        
        while (x > 0)
        {
            digit[i] = x % 10;
            x /= 10;
            i++;
        }
        
        if(tempNum % 2 == 0)
        {
            int indexMinusOne = i - 1;
            int indexInHalf = indexMinusOne / 2;
            
            for(int o = 0; o <= indexInHalf; o++)
            {
                if(digit[o] != digit[indexMinusOne]){
                    return false;
                }
                indexMinusOne--;
            }
        }
        
        if(tempNum % 2 == 1)
        {
            int indexMinusOne = i - 1;
            int indexInHalf = (indexMinusOne-1) / 2;
 
            
            for(int o = 0; o <= indexInHalf; o++)
            {
                if(digit[o] != digit[indexMinusOne]){
                    return false;
                }
                indexMinusOne--;
            }
        }
        
        return true;
    }
};