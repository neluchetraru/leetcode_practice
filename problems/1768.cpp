#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    string mergeAlternately(string word1, string word2)
    {
        string new_string = "";
        int i, j;
        for (i = 0, j = 0; i < word1.size() && j < word2.size(); i++, j++)
        {
            new_string += word1[i];
            new_string += word2[j];
        }
        if (i != word1.size())
        {
            new_string += word1.substr(i, word1.size());
        }

        if (j != word2.size())
        {
            new_string += word2.substr(j, word2.size());
        }
        return new_string;
    }
};

int main()
{
    Solution sol = Solution();
    string s1 = "abc";
    string s2 = "pqr";
    cout << sol.mergeAlternately(s1, s2);
    return 0;
}