Given n pairs of parentheses, write a function to generate all combinations of well-formed parentheses.

 

Example 1:

Input: n = 3
Output: ["((()))","(()())","(())()","()(())","()()()"]
Example 2:

Input: n = 1
Output: ["()"]
 

Constraints:

1 <= n <= 8



class Solution {
public:
    void generate(int open, int end, string &temp, vector<string> &result){
        if(open == 0 && end == 0){
            result.push_back(temp);
            return;
        }
        
        if(open > 0){
            temp.push_back('(');
            generate(open - 1, end, temp, result);
            temp.pop_back();
        } 
        
        if(end > open){
            temp.push_back(')');
            generate(open,end - 1, temp,result);
            temp.pop_back();
        }
    }
    
public:
    vector<string> generateParenthesis(int n) {
        string temp;
        vector<string> result;
        generate(n,n,temp,result);
        return result;
    }
};
