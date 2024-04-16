class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int size = s.length()
        string sub = "";
        for(int i = 0; i < size; i++){
            if(s[i] == s[i+1]){
                sub = sub + s[i];
            }
            else{
                sub = ""
            }
        }
    }
};