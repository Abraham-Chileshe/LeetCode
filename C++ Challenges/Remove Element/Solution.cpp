#include <vector>
#include <algorithm>

class Solution {
public:
    int removeElement(std::vector<int>& nums, int val) {
        if(nums.empty()) {
            return 0;
        }

        int i = 0;
        while (i < nums.size()) {
            if (nums[i] == val) {
                nums.erase(nums.begin() + i); // Corrected vector to nums
            } else {
                ++i;
            }
        }

        return nums.size(); // Return the size of the modified vector
    }
};
