class Solution {
public:
    int longestString(int x, int y, int z) {



        // mathematical solution


        // 

        if(x==0 and y==0){
            return z;
        }else if(x ==0 or y==0){
            return z*2+2;
        }else if(x==y){
            return z*2+((x+y)*2);
        }

            return  z*2+(min(x,y)*4)+2;
        



        
    }
};