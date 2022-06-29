class Solution
{
public:
    int distanceBetweenBusStops(vector<int> &distance, int start, int destination)
    {
        int left_dist = 0, right_dist = 0;
        if (destination < start)
        {
            swap(destination, start);
        }
        for (int i = 0; i < distance.size(); i++)
        {
            if (i >= start && i < destination)
            {
                left_dist += distance[i];
            }
            else
            {
                right_dist += distance[i];
            }
        }
        return min(left_dist, right_dist);
    }
};
