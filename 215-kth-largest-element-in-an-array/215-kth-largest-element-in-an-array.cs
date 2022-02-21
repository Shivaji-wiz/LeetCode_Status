public class Solution {
    public int FindKthLargest(int[] nums, int k) {
        for(int i=0;i<k;i++)//iterating array k  times to get kth element
            for(int  j=i;j<nums.Length;j++)
            {
                if(nums[i]<nums[j])
                {
                    int t=nums[i];
                    nums[i]=nums[j];
                    nums[j]=t;
                }
            }
        return nums[k-1];        
        
    }
}