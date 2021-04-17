class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        
        vector<int >v;
        for (int i=0;i<queries.size();i++)
        {
            int ans=0;// number of points inside the circle or on the circle for this circle
            for (int j=0;j<points.size();j++)
            {
                //(x-x1)^2 + (y-y1)^2 - r^2<=0
                if ((points[j][0]-queries[i][0])*(points[j][0]-queries[i][0])+(points[j][1]-queries[i][1])*(points[j][1]-queries[i][1])-queries[i][2]*queries[i][2]<=0)
                {
                    ans++;
                }
            }
            v.push_back(ans);
        }
        return v;
        
    }
};
