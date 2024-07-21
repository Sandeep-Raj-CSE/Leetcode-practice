class Solution {
public:
    string losingPlayer(int x, int y) {

        int ans=0;

        while(true){
            if(x > 0 && y >= 4){
                x=x-1;
                y=y-4;

                ans++;
            }else{
                break;
            }
        }

        if(ans % 2 == 0) return "Bob";

        return "Alice";


        
    }
};