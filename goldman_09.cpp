/*problem link: https://practice.geeksforgeeks.org/problems/number-following-a-pattern3126/1#  */


class Solution{
public:
    string printMinNumberForPattern(string S){
        stack<int> s;
        int num=1;
        string ans="";
        for(int i=0; i<S.length(); i++){
            if(S[i]=='D'){
                s.push(num);
                num++;
            }
            else{
                s.push(num);
                num++;

                while(s.size()>0){
                    ans+=to_string(s.top());
                    s.pop();
                }

            }
        }
        s.push(num++);
        while(s.size()>0) {
            ans+=to_string(s.top());
            s.pop();
        }
        return ans;// code here
    }
};
