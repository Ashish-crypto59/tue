class Solution {
public:
    int longestContinuousSubstring(string s) {
        int a=1;
        int b=1;
        char c=s[0];
        for(int i=1;i<s.size();i++){
            if(s[i]==c+1){
                b++;
                c=s[i];
            } else{
                a=max(a,b);
                b=1;
                c=s[i];
            }
        }
        a=max(a,b);
        return a;
    }
};