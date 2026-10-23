class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        int i = 0;
        int j = n-1;
        while(i<j){
            int check = numbers[i] + numbers[j];
            if(check==target) return {i+1,j+1};
            if(check < target) i++;
            else j--;
        }
        return {-1,-1};
    }
};