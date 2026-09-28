class Solution {
   public:
    string encode(vector<string>& strs) {
        string code = "";
        for (int i = 0; i < strs.size(); i++) {
            int num = strs[i].size();
            code += to_string(num) + "#" + strs[i];
        }
        cout<<code;
        return code;
    }

    vector<string> decode(string s) {
        vector<string> code;
        int i = 0;
        while (i < s.size()) {
            int hashPos = s.find('#', i);
            int num = stoi(s.substr(i, hashPos - i));
            code.push_back(s.substr(hashPos + 1, num));
            i = hashPos + 1 + num;
        }
        return code;
    }
};
