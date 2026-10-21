class Solution {
public:
int getFib(vector<int>& v, int n){
    if(n<=1) return n;
    if(v[n]!=-1){
        return v[n];
    }
    return v[n] = getFib(v,n-1) + getFib(v,n-2);
}
    int fib(int n) {
        vector<int>store(n+1,-1);
        return getFib(store,n);
    }
};