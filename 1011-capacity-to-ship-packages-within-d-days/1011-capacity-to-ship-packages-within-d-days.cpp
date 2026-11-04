class Solution {
public:
    bool valid(vector<int>& weights, int mid, int days) {
        int sum = 0;
        int count = 1;
        for (int i = 0; i < weights.size(); i++) {
            if (sum + weights[i] <= mid) {
                sum += weights[i];
            } else {
                count++;
                sum = weights[i];
            }
          
        }
          return count <= days;
    };
    int shipWithinDays(vector<int>& weights, int days) {
        int low = 0;
        int high = 0;
     
        for (int i = 0; i < weights.size(); i++) {
            low = max(low, weights[i]);
            high += weights[i];
        }
        while (low <high) {
            int mid = low + (high - low) / 2;
            
            if (valid(weights, mid, days)) {
                  
                high = mid;

            } else {
                low = mid + 1;
            }
        }
        return high;
    }
};