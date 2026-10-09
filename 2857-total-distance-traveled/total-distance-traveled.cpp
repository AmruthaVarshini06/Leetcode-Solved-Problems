class Solution {
public:
    int distanceTraveled(int mainTank, int additionalTank) {
        int totaldis = 0;
        while(mainTank >= 5){
            if(additionalTank >= 1){
                mainTank -= 5;
                mainTank += 1;
                additionalTank -= 1;
                totaldis += 50;
            }
            else{
                totaldis += mainTank * 10;
                mainTank = 0;
            }
        }
        totaldis += mainTank * 10;
        return totaldis;
    }
};