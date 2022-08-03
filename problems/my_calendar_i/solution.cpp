class MyCalendar
{
    unordered_map<int, int> bookings;

public:
    bool book(int start, int end)
    {
        for (auto &[s2, e2] : bookings)
        {
            if (!(start >= e2 || s2 >= end))
            {
                return false;
            }
        }
        bookings[start] = end;
        return true;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */