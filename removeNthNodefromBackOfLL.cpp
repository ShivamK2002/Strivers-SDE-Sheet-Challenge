/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/

Node *removeKthNode(Node *head, int K)
{

    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    if (K > count)
    {
        return head;
    }
    if (K == count)
    {
        return head->next;
    }
    // count-k; iska next delete hoga

    temp = head;
    int val = 0;
    while (val < count - K - 1)
    {
        temp = temp->next;
        val++;
    }
    Node *forw = NULL;
    if (temp->next->next != NULL)
        forw = temp->next->next;
    temp->next = forw;

    return head;
}
