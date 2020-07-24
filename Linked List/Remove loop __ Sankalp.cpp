#include<unordered_set>
void removeLoop(Node* head)
{
    // code here
    // just remove the loop without losing any nodes
    
    unordered_set<Node*> s;
    
    Node *temp = head;
    while(temp != NULL)
    {
        if(s.find(temp->next) != s.end())
        {
            temp->next = NULL;
            break;
        }
        s.insert(temp);
        temp = temp->next;
    }
}
