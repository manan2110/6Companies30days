bool canPair(vector<int> nums, int k)
{
    // Code here.
    int sum = 0;
    int n = nums.size();

    int a[k] = {0};

    for (int i = 0; i < n; i++)
    {
        int x;
        x = (nums[i] % k);
        // cout<<x;
        a[x]++;
    }

    if (a[0] % 2 != 0)
        return false;

    for (int i = 1; i <= k / 2; i++)
    {
        if (a[k - i] != a[i])
            return false;
    }
    return true;
}