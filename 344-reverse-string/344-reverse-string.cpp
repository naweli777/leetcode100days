class Solution {
public:
    void reverseString(vector<char>& s ,int i=0) {
        
        if(s.size()==0)
        //     return;
        //  if (i == (s.size() - i -1)|| i > (s.size() - i -1)) return; 
        // reverseString(s,i+1);
        // swap(s[i],s[s.size()-i-1]);
            int i=0; int j=s.size()-1;
        
        while(i<=j)
        {
            swap(s[i],s[j]);
            i++;
            j--;
        }
        
        
    }
};