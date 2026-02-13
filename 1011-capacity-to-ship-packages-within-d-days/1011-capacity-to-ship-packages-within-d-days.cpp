// brute force
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
        for(int i=low;i<=high;i++){
            int daysreq = req(weights,i);
            if(daysreq<=days) return i;
        }
        return -1;
    }
};