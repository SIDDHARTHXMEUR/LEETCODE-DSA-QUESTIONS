class Solution {
public:
    bool isPalindrome(int x) {
        int original ;
        long long rev =0;
        original= x;
        while(x >0){
            int lastdigit = x%10;
            rev =(rev*10)+lastdigit;
            x=x/10;

        }
        
        if (original == rev)
            return true;
        else
            return false;
    }
    
    };
