class Solution {
public:
    int longestValidParentheses(string s) {
       stack<int>a;
       a.push(-1);
       int max_len=0;
       for(int i=0;i<s.length();i++){
        if(s[i]=='('){
            a.push(i);
        } else{
            a.pop();
            if(a.empty()){
                a.push(i);
            }else{
                max_len=max(max_len,i-a.top());
            }
        }
       }
        return max_len;
    }
};