class Solution {
public:
    string licenseKeyFormatting(string S, int K) {
        string s1, s2;
        for(int i=0; i<S.size(); i++){
            if(S[i]!='-'){ 
                s1+=toupper(S[i]);
            }
        }
        
        int n=1;
        for(int i=s1.size()-1; i>=0; i--){
            if(n==K){
                if(i==0){
                    s2+=s1[i];
                }
                else{
                    s2+=s1[i];
                    s2+='-';
                }
                n=0;
            }
            else{
                s2+=s1[i];
            }
            n++;
        }
        
        string ans;
        for(int i=s2.size()-1; i>=0; i--){
            ans+=s2[i];
        }
        return ans;
    }
};
