class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freqM;
        for (auto num : nums) {
            freqM[num]++;
        }
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> minHeap;
        for (auto& [num, freq] : freqM) {
            minHeap.push({freq, num});
            if (minHeap.size() > k) {
                minHeap.pop();
            }
        }
        vector<int> retVal;
        while (!minHeap.empty()) {
            retVal.push_back(minHeap.top().second);
            minHeap.pop();
        }
        return retVal;
    }
};