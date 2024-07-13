class Solution {
public:
    vector<int> survivedRobotsHealths(vector<int>& positions, vector<int>& healths, string directions) {
        vector<vector<int>> robots;
        int n = positions.size();
        
        for (int i = 0; i < n; ++i) {
            robots.push_back({positions[i], healths[i], directions[i], i});
        }
        
        sort(robots.begin(), robots.end(), [](const vector<int>& r1, const vector<int>& r2) {
            return r1[0] < r2[0];
        });

        auto isCollide = [](const vector<int>& robot1, const vector<int>& robot2) {
            return ((robot1[0] < robot2[0] && robot1[2] == 'R' && robot2[2] == 'L')
                    || (robot1[0] > robot2[0] && robot1[2] == 'L' && robot2[2] == 'R'));
        };

        stack<vector<int>> stk;
        
        for (auto& robot : robots) {
            while (!stk.empty() && isCollide(stk.top(), robot)) {
                auto& top_robot = stk.top();
                if (top_robot[1] > robot[1]) {
                    top_robot[1] -= 1;
                    robot[1] = 0;
                    break;
                } else {
                    auto popped_robot = stk.top();
                    stk.pop();
                    if (robot[1] == popped_robot[1]) {
                        robot[1] = 0;
                        break;
                    } else {
                        robot[1] -= 1;
                    }
                }
            }
            if (robot[1] > 0) {
                stk.push(robot);
            }
        }

        vector<int> result;
        vector<vector<int>> surviving_robots;
        
        while (!stk.empty()) {
            surviving_robots.push_back(stk.top());
            stk.pop();
        }
        
        sort(surviving_robots.begin(), surviving_robots.end(), [](const vector<int>& r1, const vector<int>& r2) {
            return r1[3] < r2[3];
        });
        
        for (const auto& robot : surviving_robots) {
            result.push_back(robot[1]);
        }
        
        return result;
    }
};
