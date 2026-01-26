class Solution {
public:
bool cheak(int m,vector<int>& piles, int h){
    int n = piles.size();
    int count = 0;
    for(int i=0;i<n;i++){
        if(count>h) return false;
        else if(m>=piles[i]) count++;
        else if(piles[i]%m==0) {
            count += piles[i]/m;
        }
        else count += piles[i]/m + 1;
    }
    if(count>h) return false;
    else return true;
}
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int max = INT_MIN;
        for(int i=0;i<n;i++){
            if(max<piles[i]) max = piles[i];
        }
        int lo = 1;
        int hi = max;
        int ans = 0;
        while(lo<=hi){
            int mid = lo + (hi-lo)/2;
            if(cheak(mid,piles,h)){
              ans = mid;
              hi=mid-1;
            }
            else lo = mid + 1;
        }
        return ans;
    }
};