class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> result;
        sort(nums.begin(), nums.end());
        result.push_back(nums);
        while(next_permutation(nums.begin(), nums.end())) {
            result.push_back(nums);
        }
        return result;
    }
};

作者：chronosphere
链接：https://leetcode-cn.com/problems/permutations-ii/solution/c-48ms-6xing-zhe-ti-you-na-yao-fu-za-ma-by-chronos/
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。