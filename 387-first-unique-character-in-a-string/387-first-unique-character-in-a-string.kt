class Solution {
    fun firstUniqChar(s: String): Int {
        return s.indexOfFirst { s.indexOf(it) == s.lastIndexOf(it) }
        
    }
}