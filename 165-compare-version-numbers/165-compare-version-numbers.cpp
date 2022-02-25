class Solution {
public:
    int compareVersion(string version1, string version2) {
        int i=0,j=0,c=0,d=0;
        
        int n = version1.length(),m = version2.length();
        while(i<n || j<m){
            while (i<n && version1[i]!='.'){
                c = c*10 + (version1[i]-'0');
                i++;
            }
            while(j<m && version2[j]!='.'){
                d = d*10 + (version2[j]-'0');
                j++;
            }
            if(c>d){
                return 1;
            }
            if(c<d){
                return -1;
            }
            
            c = d = 0;
            i++;
            j++;
            
        }
        return 0;
    }
};