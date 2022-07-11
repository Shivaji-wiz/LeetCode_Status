class Solution {
public:
    int fillCups(vector<int>& amount) {

        return max(*max_element(begin(amount),end(amount)),(accumulate(begin(amount),end(amount),0)+1)/2);
    }
};