class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int>pq;
        int sum=0;
        for(int i=0;i<piles.size();i++){
            pq.push(piles[i]);
            sum+=piles[i];
        }
        for(int i=0;i<k;i++){
            int max=pq.top();
            pq.pop();
            int remove_part=max/2;
            sum=sum-remove_part;
            max=max-remove_part;
            pq.push(max);
        }
        return sum;
    }
};