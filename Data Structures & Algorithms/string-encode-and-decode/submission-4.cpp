class Solution {
   public:
    string encode(vector<string>& strs) {
        string code = "";
        for (int i = 0; i < strs.size(); i++) {
            int num = strs[i].size();
            code += to_string(num) + "#" + strs[i];
        }
        return code;
    }

    vector<string> decode(string s) {
        vector<string> code;
        int i = 0;
        while (i < s.size()) {
            int num = 0;
            while (s[i] != '#') {
                int digit = s[i] - '0';
                num = num * 10 + digit;
                i++;
            }

            i++;

            string word = "";
            for(int j = 0;j < num;j++){
                word += s[i];
                i++;
            }
            code.push_back(word);
        }
        return code;
    }
};
