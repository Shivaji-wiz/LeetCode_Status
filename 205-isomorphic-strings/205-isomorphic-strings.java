class Solution {
    public boolean isIsomorphic(String s, String t) {
        
        if(s.length()!=t.length()){
            return false;
        }
        
        HashMap<Character,Character> S_to_T = new HashMap<>();
        HashMap<Character,Boolean> T_used = new HashMap<>();
        
        for(int i = 0;i<s.length();i++){
            
            char ch1 = s.charAt(i);
            char ch2 = t.charAt(i);
            
            if(S_to_T.containsKey(ch1)==true){
                if(S_to_T.get(ch1)!=ch2){
                    return false;
                }
            }
            else{
                if(T_used.containsKey(ch2)==true){
                    return false;
                }
                else{
                    S_to_T.put(ch1,ch2);
                    T_used.put(ch2,true);
                }
            }
        }
        return true;
    }
}