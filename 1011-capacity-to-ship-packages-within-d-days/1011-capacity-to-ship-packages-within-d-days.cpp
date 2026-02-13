// binary search //
class Solution {
public:
int req(vector<int>& weights, int cap){
    int day = 1;
    int load = 0;
    for(int i=0;i<weights.size();i++){
        if(load + weights[i] > cap){
            load = weights[i];
            day++;
        }
        else load += weights[i];
    }
    return day;
}
int maxele(vector<int>& weights){
    int max = INT_MIN;
    for(int i=0;i<weights.size();i++){
        if(weights[i]>max) max = weights[i];
    }
    return max;
}
int sumofele(vector<int>& weights){
    int sum = 0;
    for(int i=0;i<weights.size();i++){
        sum += weights[i];
    }
    return sum;
}
    int shipWithinDays(vector<int>& weights, int days) {
        int low = maxele(weights);
        int high = sumofele(weights);
        int ans = -1;
        while(low<=high){
            int mid = (low + high)/2;
            int daysreq = req(weights, mid);
            if(daysreq <= days){
                ans = mid;
                high = mid - 1;
            }
            else low = mid + 1;
        }
        return ans;
    }
};