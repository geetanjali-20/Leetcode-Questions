class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_map<char,int> map;
        for(int i=0;i<26;i++)
            map[char('a'+i)]+=0;
        for(auto c:sentence)
        {
            map[c]+=1;
        }
        for(auto k:map)
        {
            if(k.second==0)
                return false;
        }
     
        return true;
    }
};