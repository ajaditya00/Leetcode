class Solution {
public:
    int lengthOfLastWord(string s) {
        int count=0;
        int size=s.length();
        for(int i=size-1;i>=0;i--){
            if(s[i]!=' '){
                count++;
            }
            else if(s[i]==' ' && count==0){
                continue;
            }
            else if(s[i]==' '){
                break;
            }
        }
        return count;
    }
};