class Solution {
public:
    double average(vector<int>& salary) {
        double avg=0;
        int mins=salary[0], maxs=salary[0], cnt=0;
        for(int i=0; i<salary.size(); i++){
            mins=min(mins, salary[i]);
            maxs=max(maxs, salary[i]);
        }
        
        
        for(int i=0; i<salary.size(); i++){
            if(salary[i]==mins || maxs==salary[i]){
                continue;
            }
            else{
                avg=avg+salary[i];
                cnt++;
            }
        }
        
        avg=avg/cnt;
        return avg;
    }
};
