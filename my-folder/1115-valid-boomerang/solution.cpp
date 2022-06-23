class Solution
{
public:
    bool isBoomerang(vector<vector<int>> &points)
    {
        int x1 = points[0][0], y1 = points[0][1];
        int x2 = points[1][0], y2 = points[1][1];
        int x3 = points[2][0], y3 = points[2][1];

        double c1 = (double)(y2 - y1) / (double)(x2 - x1);
        double c2 = (double)(y3 - y1) / (double)(x3 - x1);
        if (c1 != c2)
        {
            if ((x1 == x2 && y1 == y2) || (x1 == x3 && y1 == y3) || (x2 == x3 && y2 == y3))
            {
                return false;
            }
            else
            {
                if (x1 == x2 && x1 == x3 || y1 == y2 && y1 == y3)
                {
                    return false;
                }
                return true;
            }
        }
        return false;
    }
};
