class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_set<char>m(sentence.begin(),sentence.end());
        
        if(m.size()==26)
        {
            return true;
        }
        return false;
        
        
        
    }
};