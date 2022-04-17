// Given an array of integers that is already sorted in ascending order,
// find two numbers such that they add up to a specific target number.
// The function twoSum should return indices of the two numbers such that they add up to the target,

// Naive Approach Time O(N^2)
for (int i = 0; i < nums.size(); i++)
{
    // Iterating each index
    for (int j = i + 1; j < nums.size(); j++)
    {
        if (nums[i] + nums[j] == target)
        {
            answer.push_back(i);
            answer.push_back(j);
            return answer;
        }
    }
}

// Better Approach (using hashmap to storing key,values)
vector<int> twoSum(vector<int> &nums, int target)
{
    // Map to store values with indexes
    unordered_map<int, int> answer;
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        int y = target - nums[i];
        if (answer.find(y) != answer.end())
        {
            return {i, answer[y]};
        }
        answer[nums[i]] = i;
    }
    return {-1, -1};
}

// Best Approach (Using teo pointers)
vector<int> twoSum(vector<int> &nums, int target)
{
    vector<pair<int, int>> v;
    int n = nums.size();

    // Pushing array elements with their indexes
    for (int i = 0; i < n; i++)
        v.push_back({nums[i], i});

    // Sortimg array
    sort(v.begin(), v.end());

    int s = 0, e = n - 1;
    while (s < e)
    {
        if (v[s].first + v[e].first < target)
            s++;
        else if (v[s].first + v[e].first == target)
            return {v[s].second, v[e].second};
        else
            e--;
    }
    return {-1, -1};
}