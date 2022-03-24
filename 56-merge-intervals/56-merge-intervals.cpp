class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>>merge_iv;
        if(intervals.size()==0){
            return merge_iv;
        }
        sort(intervals.begin(),intervals.end());
        vector<int>temp = intervals[0];
        for(auto it:intervals){
            if(it[0]<=temp[1]){
                temp[1] = max(it[1],temp[1]);
            }
            else{
                merge_iv.push_back(temp);
                temp = it;
            }
        }
        
        merge_iv.push_back(temp);
        return merge_iv;
    }
};