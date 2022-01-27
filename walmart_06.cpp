/* problem link: https://practice.geeksforgeeks.org/problems/power-of-numbers-1587115620/1/?company[]=Walmart&company[]=Walmart&page=1&query=company[]Walmartpage1company[]Walmart */




class Solution{
    public:
    //You need to complete this fucntion

    long long power(int N,int R)
    {
       if(R==0)
        {
            return 1;
        }
       if(R==1)
       {
           return N;
       }

       long long temp = power(N,R/2)%mod;
       temp=(temp*temp)%mod;
       if(R%2==0)
       {
           return (temp)%mod;
       }
       if(R%2!=0)
       {
           return (N*temp)%mod;
       }

    }

};
