#include<unordered_set>
int intersectPoint(Node* head1, Node* head2)
{
    // Your Code Here
    unordered_set<Node*> s;
    
    Node *temp = head1;
    
    while(temp != NULL)
    {
        s.insert(temp);
        temp = temp->next;
    }
    
    temp = head2;
    
    int ans = -1;
    while(temp != NULL)
    {
        if(s.find(temp) != s.end())
        {
            ans = temp->data;
            break;
        }
        temp = temp->next;
    }
    
    return ans;
    
}
