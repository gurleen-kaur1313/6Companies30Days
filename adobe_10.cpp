/* problem link: https://practice.geeksforgeeks.org/problems/winner-of-an-election-where-votes-are-represented-as-candidate-names-1587115621/1/# */


class Solution{
  public:

    //Function to return the name of candidate that received maximum votes.
    vector<string> winner(string arr[],int n)
    {
        unordered_map<string, int> hm;
        for(int i=0; i<n; i++)
            hm[arr[i]]++;

        int maxVote=hm[arr[0]];
        string winner=arr[0];
        for(int i=1; i<n; i++)
        {
          int currVote=hm[arr[i]];
          string name=arr[i];
          if(currVote > maxVote)
          {
              maxVote= currVote;
              winner=name;
          }
          else if(currVote==maxVote && winner > name)
                 winner = name;
        }

        vector<string> res;
        res.push_back(winner);
        res.push_back(to_string(maxVote));
        return res;
    }
};
