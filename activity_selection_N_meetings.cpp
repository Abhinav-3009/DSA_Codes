struct cmp {
    bool operator()(pair<int,int> one, pair<int,int>two) {
        return one.second < two.second; 
    }
};

class Solution
{
    public:
    int maxMeetings(int start[], int end[], int n)
    {
        if(n == 0) 
            return 0; 
        vector<pair<int,int>> meetings; 
        for(int i = 0; i < n; ++i){
            meetings.push_back({start[i], end[i]}); 
        }
        sort(meetings.begin(), meetings.end(), cmp()); 
        int count = 1; 
        int time_end = meetings[0].second; 
        
        for(int i = 1; i < meetings.size() ; ++i) {
            if(meetings[i].first > time_end) {
                count++; 
                time_end = meetings[i].second; 
            } 
        }
        return count; 
        
    }
};
