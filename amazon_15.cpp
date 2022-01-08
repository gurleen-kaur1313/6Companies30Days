/* problem link: https://practice.geeksforgeeks.org/problems/delete-n-nodes-after-m-nodes-of-a-linked-list/1/# */


class Solution
{
    public:
    void linkdelete(struct Node  *head, int M, int N)
    {
        Node* prev=head;
        while(prev){
        for(int i=1; i<M && prev; i++){
            prev=prev->next;
        }
        if(!prev) return;
        Node* temp=prev;
        for(int i=0; i<=N && temp; i++){
            temp=temp->next;
        }
        prev->next=temp;
        prev=temp;
        }
    }
};
