class Solution
{
public:
    string decodedString(string s)
    {
        // code here
        string ans = "";
        stack<char> st;
        for (char c : s)
        {
            if (c == ']')
            {
                string temp = "";
                while (st.top() != '[')
                {
                    char x = st.top();
                    st.pop();
                    temp = x + temp;
                }
                st.pop();
                string nos = "";
                while (!st.empty() && isdigit(st.top()))
                {
                    nos = st.top() + nos;
                    st.pop();
                }
                int n = stoi(nos);
                string temp1 = "";
                for (int i = 0; i < n; i++)
                    temp1 += temp;
                // cout<<temp1<<"\n";
                for (char cc : temp1)
                    st.push(cc);
            }
            else
                st.push(c);
        }
        while (!st.empty())
        {
            ans = st.top() + ans;
            st.pop();
        }
        return ans;
    }
};