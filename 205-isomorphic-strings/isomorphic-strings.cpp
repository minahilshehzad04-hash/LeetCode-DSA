class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char> mp1; //s->t
        unordered_map<char,char> mp2; //t->s
        
        for(int i = 0; i < s.size(); i++ ){
            if(mp1[s[i]] == 0 && mp2[t[i]] == 0){
                mp1[s[i]] = t[i];
                mp2[t[i]] = s[i];
            }
            else if(mp1[s[i]] != t[i] || mp2[t[i]] != s[i]){
                return false;
            }
        }
        return true;
    }
};