class Solution {
public:
    bool isPalindrome(string s) {
        int l = 0;
        int r = s.length()-1;

        while(l < r){
            if(isalnum(s[l]) != 0 && isalnum(s[r]) != 0){

                if(tolower(s[l]) == tolower(s[r])){
                    l++;
                    r--;
                }
                else{
                    return false;
                }
             
            }
            if( isalnum(s[l]) == 0){
                 l++;
             }
            if(isalnum(s[r]) == 0){
                 r--;
             }

            
        }
        return true;
        

    }
};
