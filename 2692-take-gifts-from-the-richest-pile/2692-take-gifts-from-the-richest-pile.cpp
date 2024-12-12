class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
         priority_queue<int> maxHeap(gifts.begin(), gifts.end());
        while (k-- > 0) {
            int maxPile = maxHeap.top();
            maxHeap.pop();
            int remaining = floor(sqrt(maxPile));
            maxHeap.push(remaining);
        }
        long long totalGifts = 0;
        while (!maxHeap.empty()) {
            totalGifts += maxHeap.top();
            maxHeap.pop();
        }
        return totalGifts;
    }
};