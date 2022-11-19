class Solution
{
public:
    vector<string> split(string s, char del)
    {
        stringstream ss(s);
        vector<string> part;
        string word;
        while (!ss.eof())
        {
            getline(ss, word, del);
            part.push_back(word);
        }
        return part;
    }
    bool checkIPv4(string s)
    {
        vector<string> parts = split(s, '.');
        if (parts.size() != 4)
        {
            return false;
        }
        for (string part : parts)
        {
            if (part.empty())
            {
                return false;
            }
            else if (part.size() > 3 || (part.size() > 1 && part[0] == '0'))
            {
                return false;
            }

            for (char c : part)
            {
                if (!isdigit(c))
                {
                    return false;
                }
            }
            if (stoi(part) > 255)
            {
                return false;
            }
        }
        return true;
    }
    bool checkIPv6(string s)
    {
        vector<string> parts = split(s, ':');
        if (parts.size() != 8)
        {
            return false;
        }
        for (string part : parts)
        {
            if (part.empty())
            {
                return false;
            }
            else if (part.size() > 4)
            {
                return false;
            }
            for (char c : part)
            {
                if (!isxdigit(c))
                {
                    return false;
                }
            }
        }
        return true;
    }
    string validIPAddress(string queryIP)
    {
        bool ipv4, ipv6;
        vector<string> answer = {"IPv4", "IPv6", "Neither"};
        ipv6 = checkIPv6(queryIP);
        ipv4 = checkIPv4(queryIP);
        if (ipv4)
        {
            return answer[0];
        }
        else if (ipv6)
        {
            return answer[1];
        }
        else
        {
            return answer[2];
        }
    }
};
