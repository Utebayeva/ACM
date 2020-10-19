class Solution {
public:
    string sortString(string s) {
        string res="";
        sort(s.begin(), s.end());
        
        while(true){
            if(s.size()<1){
     		break;
	    }
            res+=s[0];
            s.erase(0, 1);
            while(true){
                bool flag = false;
                for(int i=0; i<s.size(); i++){
                    if(res[res.size()-1]<s[i]){
                        res+=s[i];
                        flag = true;
                        s.erase(i, 1);
                        break;
                    }
                }
                if(!flag) break;
            }
            if(s.size()>0){
                res+=s[s.size()-1];
                s.erase(s.size()-1, 1);
            }
            while(true){
                bool flag = false;
                for(int i=s.size()-1; i>=0; i--){
                    if(res[res.size()-1] > s[i]){
                        res+=s[i];
                        flag=true;
                        s.erase(i, 1);
                        break;
                    }
                }
                if(!flag) break;
            }
        }
        
    return res;    
    }
};
