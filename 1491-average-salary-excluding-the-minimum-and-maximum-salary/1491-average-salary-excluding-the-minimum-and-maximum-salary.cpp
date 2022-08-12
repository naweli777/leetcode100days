class Solution {
public:
    double average(vector<int>& salary) {
        
        sort(salary.begin(),salary.end());
        double avg=0,c=0;
        for(int i=1; i<salary.size()-1; i++)
        {
            avg +=salary[i];
            c++;
        }
        return avg/c;
        
        
    }
};