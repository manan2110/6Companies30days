class Solution
{
public:
    vector<vector<string>> Anagrams(vector<string> &string_list)
    {
        //code here
        vector<vector<string>> ans;
        unordered_map<string, vector<string>> m;
        for (string i : string_list)
        {
            string s = i;
            sort(s.begin(), s.end());
            m[s].push_back(i);
        }
        for (auto i : m)
        {
            ans.push_back(i.second);
        }
        return ans;
    }
};
