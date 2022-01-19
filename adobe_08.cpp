/* problem link: https://practice.geeksforgeeks.org/problems/implement-atoi/1/# */


class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string str) {
       int ans=0;
       int i=0;
       int len=str.length();
       int flag=0;

       while(i<len)
       {
           if(i==0 && str[i]=='-')
           {
               flag=1;
               i++;
               continue;
           }

           if(str[i]<'0' || str[i]>'9')
               return -1;

           int t=str[i]-'0';
           ans=ans*10 + t;
           i++;
       }

       return flag==1?(-1*ans):ans;
    }
};
