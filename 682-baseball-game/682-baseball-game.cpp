class Solution {
public:
    int calPoints(vector<string>& ops) {
        vector<int>res;
        
        for(string a:ops){
            if(a=="C"){
                res.pop_back();
            }
            
            else if(a=="D"){
                res.push_back(res.back()*2);
            }
            
            else if(a=="+"){
                res.push_back(res.back()+res[res.size()-2]);
            }
            else{
                res.push_back(stoi(a));
            }
        }
        return accumulate(res.begin(),res.end(),0);
    }
};