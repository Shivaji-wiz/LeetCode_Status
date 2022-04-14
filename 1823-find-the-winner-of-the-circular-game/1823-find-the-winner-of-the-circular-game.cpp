class Solution {
public:
    int findTheWinner(int n, int k) {
        vector<int> v;
        int p=n;
        for(int i=1; i<=n; i++)
            v.push_back(i);
        k--;
        int j=0;
        for(int i=0; i<n-1; i++)
        {
            v.erase(v.begin()+((k+j)%p));
            j=(k+j)%p;   
            p--; 
        }
        return v[0];        
    }
};