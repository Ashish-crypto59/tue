class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string> a;
        for(int i:nums){
            a.push_back(to_string(i));
        }
        sort(a.begin(),a.end(),[](const string a,const string b){
            return a+b>b+a;
        });
        string s;
        for(string x:a){
            s+=x;
        }
        while(s.length()>1 and s[0]=='0'){
            s.erase(0,1);
        }
        return s;
    }
};