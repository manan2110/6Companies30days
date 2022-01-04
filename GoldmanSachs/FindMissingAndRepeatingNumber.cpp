int *findTwoElement(int *arr, int size)
{
    // code here
    int *ans = new int(2);
    ans[0] = 0;
    ans[1] = 0;
    int xor_of_elements = 0;
    for (int i = 0; i < size; i++)
    {
        xor_of_elements ^= arr[i];
    }
    for (int i = 1; i <= size; i++)
    {
        xor_of_elements ^= i;
    }

    int x;
    x = xor_of_elements & ~(xor_of_elements - 1); // to find the rightmost set bit

    int a = 0, b = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] & x)
            a ^= arr[i];
        else
            b ^= arr[i];
    }
    for (int i = 1; i <= size; i++)
    {
        if (i & x)
            a ^= i;
        else
            b ^= i;
    }
    // to check which one is repeating and which one is missing
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == a)
        {
            ans[0] = a;
            ans[1] = b;
            break;
        }
        if (arr[i] == b)
        {
            ans[0] = b;
            ans[1] = a;
            break;
        }
    }

    return ans;
}