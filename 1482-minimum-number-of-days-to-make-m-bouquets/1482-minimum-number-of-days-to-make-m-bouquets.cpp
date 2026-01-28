class Solution {
public:
bool possible(vector<int>& arr,int day, int m, int k){
    int count = 0;
    int n = 0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]<=day){
            count++;
        }
        else {
            n += (count/k);
            count = 0;
        }
    }
    n += (count/k);
    if(n>=m) return true;
    else return false;
}
int minelement(vector<int>& arr){
    int min = INT_MAX;
    for(int i=0;i<arr.size();i++){
        if(arr[i]<min) min = arr[i];
    }
    return min;
}
int maxelement(vector<int>& arr){
    int max = INT_MIN;
    for(int i=0;i<arr.size();i++){
        if(arr[i]>max) max = arr[i];
    }
    return max;
}
    int minDays(vector<int>& arr, int m, int k) {
        int s = arr.size();
        long long a = 1ll * m * k;
        if(a > s) return -1;
        int low = minelement(arr);
        int high = maxelement(arr);
        int n = -1;
        while(low<=high){
            int mid = (low+high)/2;
            if(possible(arr, mid, m, k)==true){
                n = mid;
                high = mid - 1;
            }
            else low = mid + 1;
        }
        return n;
    }
};