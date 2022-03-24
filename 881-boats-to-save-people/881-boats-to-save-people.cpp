class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int res = 0;
        sort(people.begin(),people.end());
        int l = 0;
        int h = people.size()-1;
        while(l<=h){
            if(people[l]+people[h]<=limit){
                l++;
                h--;
                res++;
            }
            else{
                h--;
                res++;
            }
        }
        return res;
    }
};