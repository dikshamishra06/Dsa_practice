class Solution {
public:
int ways(vector<int>& store,int n){
    if(n<=3) return n;
    if(store[n]!=-1) return store[n];
    store[n] = ways(store,n-1) + ways(store,n-2);
    return store[n];
}
    int climbStairs(int n) {
        vector<int>store(n+1,-1);
        return ways(store,n);
    }
};