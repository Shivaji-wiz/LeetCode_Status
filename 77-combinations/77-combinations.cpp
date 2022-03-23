class Solution {
public:
    using vec1 = vector<int>;
    using vec2 = vector<vector<int>>;
    
    void back_track(int curr,int &n,int &k,vec2& res,vec1& v){
        if (v.size()==k){
            res.push_back(v);
            return;
        }
        for(int j = curr;j<=n;j++){
            v.push_back(j);
            back_track(j+1,n,k,res,v);
            v.pop_back();
        }
    }
    vec2 combine(int n, int k) {
        vec1 v;
        vec2 res;
        back_track(1,n,k,res,v);
        return res;
    }
};