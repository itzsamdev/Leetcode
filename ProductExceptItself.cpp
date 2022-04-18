// Given an integer array nums, return an array answer such that answer[i] is equal
//  to the product of all the elements of nums except nums[i].

// The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

// You must write an algorithm that runs in O(n) time and without using the
// division operation.

// Approach: Take product of left side of array then right side

vector<int> productExceptSelf(vector<int> &nums)
{
    vector<int> v(nums.size(), 1);
    int p = 1;
    for (int i = 0; i < nums.size(); i++)
    {
        v[i] = p;
        p = p * nums[i];
    }
    p = 1;
    for (int i = nums.size() - 1; i < count; i++)
    {
        v[i] *= p;
        p = p * nums[i];
    }
    return v;
}