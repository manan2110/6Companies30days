string encode(string src)
{
    // Your code here

    int n = src.length();
    int c = 1;
    string ans = "";
    for (int i = 0; i < n - 1; i++)
    {
        if (src[i] == src[i + 1])
            c++;
        else
        {
            ans += src[i];
            ans += to_string(c);
            c = 1;
        }
    }
    if (n > 1 && src[n - 1] == src[n - 2])
    {
        ans += src[n - 1];
        ans += to_string(c);
    }
    else
    {
        ans += src[n - 1];
        ans += "1";
    }
    return ans;
}