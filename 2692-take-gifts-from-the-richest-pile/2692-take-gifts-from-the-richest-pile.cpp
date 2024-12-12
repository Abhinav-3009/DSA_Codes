class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<int>pq;
        long long ans = 0;
        for(int i : gifts){
            pq.push(i);
            ans += i;
        }

        while(k--){
            int maxElement = pq.top();
            ans -= maxElement - sqrt(maxElement);
            pq.pop();
            pq.push(sqrt(maxElement));
        }
        return ans;
    }
};