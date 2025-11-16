class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size()!=t.size()) return false;
        vector<int>mapS(256,-1);
        vector<int>mapT(256,-1);
        for(int i=0;i<s.size();++i){
            char c=s[i];
            char d=t[i];
            if(mapS[c]==-1&&mapT[d]==-1){
                mapS[c]=d;
                mapT[d]=c;
            }else if(mapS[c]!=d||mapT[d]!=c){
                return false;
            }
        }
        return true;
    }
};