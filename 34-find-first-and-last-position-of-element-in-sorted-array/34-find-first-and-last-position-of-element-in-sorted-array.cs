public class Solution {
    public int[] SearchRange(int[] nums, int target) {
        
        var ind = new int[2]{-1,-1};
        
        ind[0] = Array.IndexOf(nums,target);
        
        ind[1] = Array.LastIndexOf(nums,target);
        
        return ind;
                          
    }
}


