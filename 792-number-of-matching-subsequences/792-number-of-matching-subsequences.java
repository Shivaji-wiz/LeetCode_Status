class Solution {
    public int numMatchingSubseq(String s, String[] words) {
        
        int index = -1;
        int count = 0;
        boolean subseq = true;
        
        for(String word : words){
            for(char c : word.toCharArray()){
                index = s.indexOf(c,index + 1);
                if(index == -1){
                    subseq = false;
                    break;
                }
            }
            
            if(subseq){
                count++;
            }
            
            subseq = true;
            index = -1;
        }
        return count;
    }
}






