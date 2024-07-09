/*
class Solution {
public:
    void solve(int open, int close, string output, vector<string> &ans)
    {
        //base case
        if(open == 0 && close == 0){
            ans.push_back(output);
            return;
        }
        //one case
        //include (
        if(open > 0){
            output.push_back('(');
            solve(open - 1, close, output, ans);
            output.pop_back();
        }
        //include )
        if(close > open){
            output.push_back(')');
            solve(open, close - 1, output, ans);
            output.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string output;
        int open = n;
        int close = n;
        solve(open, close, output, ans);

        return ans;      
    }
};
*/