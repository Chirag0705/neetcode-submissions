class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int i = 0;
        int j = 0;

        while (i < nums.size()) {
            j = i + 1;

            while (j < nums.size() && nums[i] != nums[j]) {
                j++;
            }

            if (j < nums.size() && nums[i] == nums[j]) {
                if (abs(i - j) <= k) {
                    return true;
                }
            }

            i++;
        }

        return false;
    }
};