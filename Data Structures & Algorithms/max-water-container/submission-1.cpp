class Solution {
public:
    int maxArea(vector<int>& heights) {
        int i = 0;
        int j = heights.size()-1;
        int ans = INT_MIN;
        int waterStored = 0;
        while(i<j){
            waterStored = (j-i)*(min(heights[i],heights[j]));
            cout<<j-i<<" "<<waterStored<<endl;
            ans = max(ans, waterStored);
           if(heights[i] < heights[j]){
            i++;
           }
           else{
            j--;
           }

        }
        return ans;
    }
};
