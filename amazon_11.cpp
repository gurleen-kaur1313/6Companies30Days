/* problem link: https://practice.geeksforgeeks.org/problems/serialize-and-deserialize-a-binary-tree/1# */

class Solution
{
    public:
    //Function to serialize a tree and return a list containing nodes of tree.
    void help(Node* root,vector<int>&a)
    {
        if(!root){
            a.push_back(int(NULL));
            return;
        }
        a.push_back(root->data);
        help(root->left,a);
        help(root->right,a);
    }
    vector<int> serialize(Node *root)
    {
       vector<int> a;
       help(root,a);
       return a;
    }

    //Function to deserialize a list and construct the tree.
    int idx=0;
    Node * deSerialize(vector<int> &a)
    {
       if((a.size()-1)<idx||a[idx]==NULL)
       {
           idx++;
           return NULL;
       }
       Node*root=new Node(a[idx++]);
       root->left=deSerialize(a);
       root->right=deSerialize(a);
       return root;
    }

};
