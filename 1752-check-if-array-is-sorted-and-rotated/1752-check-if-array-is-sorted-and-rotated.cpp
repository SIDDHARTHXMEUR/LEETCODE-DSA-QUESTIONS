class Solution {
public:
    bool check(vector<int>& nums) {
        int count = 0;              // Sorted order kitni baar break hua, usko count karega
        int n = nums.size();        // Array ka size

        for (int i = 0; i < n; i++) {

            // Current element ko next element se compare kar rahe hain
            // Agar current element bada hai, to sorted order yahan break hua
            if (nums[i] > nums[(i + 1) % n]) {

                // Yahan order break hua, isliye count badha diya
                count++;
            }
        }

        // Sorted + rotated array me order maximum 1 baar break ho sakta hai
        // count 0 ya 1 hai → true
        // count 1 se zyada hai → false
        return count <= 1;
    }
};