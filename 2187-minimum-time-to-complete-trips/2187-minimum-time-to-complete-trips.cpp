class Solution {
public:
    long long minimumTime(vector<int>& time, int totalTrips) {
        long long low = 1;
        long long hig = (long long)*min_element(time.begin(),time.end())*totalTrips;
        while(low<hig){
            long long mid = low + (hig-low)/2;
            long long trips = 0;
            for(int t : time){
                trips += mid/t;
                if(trips >= totalTrips) break;
            }    
                if(trips>=totalTrips)hig = mid;
                else low = mid+1;
        }
        return low;
    }
};