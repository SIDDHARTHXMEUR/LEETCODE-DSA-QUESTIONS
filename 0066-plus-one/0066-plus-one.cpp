class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for(int i=digits.size()-1;i>=0;i--){
            if(digits[i]<9){   //1
                digits[i]++;    // flow is from 1st to 2nd then repeat if no return digit from 1 then go in 3rd
                return digits;
            }
            if(digits[i]==9){  //2
                digits[i]=0;
            }
        }
            digits.insert(digits.begin(), 1);  //3
            return digits;
    }
    
};