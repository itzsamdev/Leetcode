//  Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]]
// such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.

// Notice that the solution set must not contain duplicate triplets.

// Approach: Two Pointer Approach
vector<vector<int>> threeSum(vector<int> &nums)
{
    vector<vector<int>> ans;
    sort(nums.begin(), nums.end());
    int n = nums.size();
    // Iterate each element
    for (int i = 0; i < n; i++)
    {
        int value = nums[i];
        int target = 0 - value;
        int left = i + 1;
        int right = n - 1;
        // Iterate for all other elements for ith element
        while (left < right)
        {

            if (nums[left] + nums[right] == target)
            {
                ans.push_back({nums[i], nums[left], nums[right]});
                // While loop to avoid dublicate answers
                while (left < right && nums[left] == nums[left + 1])
                    left++;
                while (left < right && nums[right] == nums[right - 1])
                    right--;
                left++;
                right--;
            }

            else if (nums[left] + nums[right] < target)
            {
                left++;
            }
            else
            {
                right--;
            }
        }
        // To avoid dublicate values
        while (i + 1 < n && nums[i + 1] == nums[i])
            i++;
    }
    return ans;
}