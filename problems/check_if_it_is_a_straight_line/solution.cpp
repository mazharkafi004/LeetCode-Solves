class Solution
{
public:
    bool checkStraightLine(vector<vector<int>> &coordinates)
    {
        int n = coordinates.size();
        sort(coordinates.begin(),coordinates.end());
        if(n==1||n==2){
            return true;
        }
        double dy = coordinates[1][1] - coordinates[0][1], dx = coordinates[1][0] -coordinates[0][0];
        double m = dy/dx;
        for (int i = 1; i < n - 1; i++)
        {
            dy = coordinates[i+1][1] - coordinates[i][1];
            dx = coordinates[i+1][0] - coordinates[i][0];
            if (abs(double(dy/dx)) != abs(m))
            {
                return false;
            }
        }
        return true;
    }
};