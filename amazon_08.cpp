/* problem link: https://practice.geeksforgeeks.org/problems/count-ways-to-nth-stairorder-does-not-matter1322/1/# */


class Solution
{
    public:
    //Function to count number of ways to reach the nth stair
    //when order does not matter.
    long long countWays(int m)
    {
       long long ans=m/2+1;
       return ans;
    }
};
