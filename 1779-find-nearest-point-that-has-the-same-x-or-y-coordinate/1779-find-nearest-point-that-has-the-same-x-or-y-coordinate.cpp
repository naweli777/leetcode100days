class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int distance = INT_MAX;
        int index=-1;
        for(int i=0; i<points.size(); i++)
        {
            if(points[i][0]==x || points[i][1]==y)
            {
                if(abs(points[i][0]-x)+abs(points[i][1]-y)<distance)
                {
                    distance= abs(points[i][0]-x)+abs(points[i][1]-y);
                    index =i;
                }
            }
        }
                                                      return index;
    }
};