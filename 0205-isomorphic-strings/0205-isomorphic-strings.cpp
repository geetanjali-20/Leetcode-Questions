class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> mapS, mapT;
        for (int i=0; i<s.length(); ++i) {
            if (mapS[s[i]] && mapS[s[i]]!=t[i]) return false;
            if (mapT[t[i]] && mapT[t[i]]!=s[i]) return false;
            mapS[s[i]]=t[i];
            mapT[t[i]]=s[i];
        }
        return true;
    }
};