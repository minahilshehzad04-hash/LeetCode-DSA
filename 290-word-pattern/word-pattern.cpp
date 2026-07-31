class Solution {
public:
    bool wordPattern(string pattern, string s) {

        vector<string> words;
        stringstream ss(s);
        string word;
        while(ss >> word){
        words.push_back(word);
        }

        if(pattern.size() != words.size()){
        return false;
        }

        unordered_map<char,string> mp1; //pattern to s
        unordered_map<string,char> mp2;  // s to pattern

        for(int i = 0; i < pattern.size(); i++){
            if(mp1[pattern[i]] == "" && mp2[words[i]] == 0){
                mp1[pattern[i]] = words[i];
                mp2[words[i]] = pattern[i];
            }
            else if(mp1[pattern[i]] != words[i] || mp2[words[i]] != pattern[i]){
                return false;
            }
        }
        return true;
    }
};