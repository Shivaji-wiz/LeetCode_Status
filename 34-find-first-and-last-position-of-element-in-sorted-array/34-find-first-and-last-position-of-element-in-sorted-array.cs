public class Solution {
    public int[] SearchRange(int[] nums, int target) {
        int[] index = new int[2]{-1,-1};
       index[0] = Array.IndexOf(nums,target);
        index[1] = Array.LastIndexOf(nums,target);      
        return index;        
    }
}