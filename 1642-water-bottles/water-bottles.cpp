class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int fullBottle = numBottles;

        while(numBottles >= numExchange){

            fullBottle += numBottles/numExchange;

            numBottles = (numBottles/numExchange ) + (numBottles % numExchange);

        }

        return fullBottle;

        
    }
};