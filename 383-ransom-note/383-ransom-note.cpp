class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        
        unordered_map<char,int>mp;
        int r= ransomNote.size();
        int s= magazine.size();
        
        for(int i=0; i<s;i++){
            mp[magazine[i]]++;
        }
        
        for(int i=0; i<r; i++)
        {
            if(mp[ransomNote[i]]==0)
            {
                return false;
            }else
            {
                mp[ransomNote[i]]--;
            }
        }
        return true;
    }
};