string printMinNumberForPattern(string s)
{
    // code here
    int n = s.length();
    int mini = 1;
    stack<int> st;
    string ans = "";
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'D')
            st.push(mini++);
        else
        {
            st.push(mini++);
            while (!st.empty())
            {
                ans += to_string(st.top());
                st.pop();
            }
        }
    }
    st.push(mini);
    while (!st.empty())
    {
        ans += to_string(st.top());
        st.pop();
    }
    return ans;
}