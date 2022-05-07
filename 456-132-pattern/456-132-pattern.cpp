class Solution {
public:
    bool find132pattern(vector<int>& nums) {
     vector<int>sm;
     int n=nums.size();
     sm.push_back(nums[0]);
     for(int i=1;i<n;i++)
	 {
	     sm.push_back(min(sm[i-1],nums[i]));
	 }
     stack<int>s;
	 for(int i=n-1;i>=0;i--)
	 {
	    if(sm[i]<nums[i])
	    {
	      while(!s.empty() && s.top()<=sm[i])
	     {
	        s.pop();
	     }
	     if(!s.empty() && s.top()<nums[i])return true;   
	    }
	    s.push(nums[i]);
	 }
	 return false;        
    }
};