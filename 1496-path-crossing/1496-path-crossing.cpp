class Solution {
public:
    bool isPathCrossing(string path) {
        unordered_map<char, pair<int,int>> steps;
        steps['N'] = {0,1};
        steps['E'] = {1,0};
        steps['S'] = {0,-1};
        steps['W'] = {-1,0};
        unordered_set<string> visited;
        visited.insert("0,0");
        int x=0 ,y=0;
        for(char c : path){
            pair<int,int> curr = steps[c];
            int i = curr.first;
            int j = curr.second;
            x+=i;
            y+=j;
                
            string str = to_string(x) + "," + to_string(y);
            if (visited.find(str) != visited.end()) {
                return true;
            }
            
            visited.insert(str);
        }
        
        return false;
    }
};
