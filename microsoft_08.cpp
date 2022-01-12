/* problem link: https://practice.geeksforgeeks.org/problems/connect-nodes-at-same-level/1/# */


class Solution
{
    public:
    //Function to connect nodes at same level.
    void connect(Node *root)
    {
        queue<Node*>q;
        q.push(root);

      while(!q.empty())
      {
          int k=q.size();
          while(k--)
          {
              Node*prev=q.front();
              q.pop();

              if(k==0)
              prev->nextRight=NULL;
              else
              prev->nextRight=q.front();

              if(prev->left)
              q.push(prev->left);

              if(prev->right)
              q.push(prev->right);

          }
      }
    }

};
