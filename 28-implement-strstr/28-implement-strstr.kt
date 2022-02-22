class Solution {
    fun strStr(haystack: String, needle: String): Int {
        if(haystack == "" && needle == "")
        return 0
    
    for(i in haystack.indices){
        if(i + needle.length > haystack.length)
            return -1
        if(haystack.substring(i, i + needle.length) == needle)
            return i
    }
    
    return -1
        
    }
}