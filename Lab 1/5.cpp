class Solution {
public:
    string reverseWords(string s) {
        s=' '+s+' ';
        string s1;
        for(int i=s.size()-1; i>=0; i--){
            if(s[i]!=' ' && s[i-1]==' '){
                string s2;
                for(int j=i;; j++){
                    s2+=s[j];
                    if(s[j+1]==' '){
                        break;
                    }
                }
                if(s1.empty()){
                    s1+=s2;
                }
                else{
                    s1+=' '+s2;
                }
            }
        }
        
        return s1;
    }
};
