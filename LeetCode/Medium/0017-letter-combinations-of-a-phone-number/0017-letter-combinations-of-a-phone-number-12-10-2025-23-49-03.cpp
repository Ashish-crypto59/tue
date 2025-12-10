class Solution {
public:
    vector<string> letterCombinations(string digits) {
     vector<string> result;
        if (digits.empty()) {
            return result;
        }
        vector<string> phone = {"abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        result.push_back("");
        for (char c : digits) {
            vector<string> temp;
            for (string res : result) {
                for (char letter : phone[c - '2']) {
                    temp.push_back(res + letter);
                }
            }
            result = temp;
        }
        return result;
    }
};