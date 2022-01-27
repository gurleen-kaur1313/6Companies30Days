/* problem link: https://leetcode.com/problems/remove-colored-pieces-if-both-neighbors-are-the-same-color */



class Solution {
public:
    bool winnerOfGame(string colors) {
        int alice=0;
        int bob=0;
        int n=colors.size();
        for(int i = 0;i<n;i++){
            int count=1;
            while(colors[i]==colors[i+1] && i+1<n){
                i++;
                count++;
            }
            if(count>=3){
                if(colors[i]=='A'){
                    alice+=count-2;
                }else if(colors[i]=='B'){
                    bob+=count-2;
                }
            }

        }
        if(alice>bob){
            return true;
        }
        return false;
    }
};
