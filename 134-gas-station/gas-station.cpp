class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {

        int n=gas.size();
        int kami=0; 
       int pura=0;
       int start=0;
       
       for(int i=0; i<n;i++){
           pura+=gas[i]-cost[i];
           
           
           if(pura < 0){
               kami=kami+pura;
               start=i+1;
               pura=0;
           }
       }
       
       
       if(kami+pura >=0){
           return start;
       }else{
           return -1;
       }
        
    }
};