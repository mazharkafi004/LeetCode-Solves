class MyCalendar {
    vector<pair<int, int>> books;
public:    
    bool book(int start, int end) {
        for (auto [s, e] : books)
            if (s < end && start < e) return false;
        books.push_back({start, end});
        return true;
    }
};

