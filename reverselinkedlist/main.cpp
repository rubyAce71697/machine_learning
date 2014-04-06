#include <iostream>

using namespace std;

struct node
{
    int index;
    //node *previous;
    node *next;
};
int main()
{
    node *first=NULL,*curr_ptr = NULL;
    int n;
    cout<<"Enter the number of nodes you want to enter: ";
    cin>>n;
    cout<<"ENter the nodes: \n";
    //enter nodes
    for(int i=0;i<n;i++)
    {
        if(first == NULL)
        {
            first = new node;
            curr_ptr = first;
            cin>>first->index;
            //curr_ptr->previous = NULL;
            curr_ptr->next = NULL;
        }
        else
        {
            curr_ptr->next = new node;
            curr_ptr = curr_ptr->next;
            curr_ptr->next = NULL;
            cin>>curr_ptr->index;

        }

    }
    //code involving reversing the linked list

    node *p = first;
    node *r ,*q = NULL;

    while(p != NULL)
    {
            r = q;
            q = p;
            p = p->next;
            q->next = r;
    }


    while(q!=NULL)
    {

        cout<<q->index<<"->";
        q = q->next;
    }

    return 0;
}
