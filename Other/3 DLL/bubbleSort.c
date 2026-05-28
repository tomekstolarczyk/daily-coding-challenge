// bubble sort on a doubly linked list
#include <stdio.h>

typedef struct DLL_Node{
    int data;
    struct DLL_Node* prev;
    struct DLL_Node* next;
} node;

void bubbleSort(node** head)
{
    if(*head == NULL || (*head)->next==NULL) {return;}
    int swapped;
    node* sortedFromHere = NULL;
    
    do {
        swapped = 0;
        node* p = *head;

        while(p->next != sortedFromHere)
        {
            if(p->data > p->next->data)
            {
                // wezel poprzedzajacy pare
                if(p->prev != NULL)
                {
                    p->prev->next = p->next;
                }
                else
                {
                    *head = p->next;
                }

                // wezel nastepujacy po naszej parze
                if(p->next->next != NULL) 
                {
                    p->next->next->prev = p;
                }
                
                // przepinanie krzyzowe naszej pary
                node* nxt = p->next;
                node* prv = p->prev;
                // przepinamy nasz wskaznik
                p->next = p->next->next;
                p->prev = nxt;
                // przepinamy wskaznik poprzedzajacy
                nxt->prev = prv;
                nxt->next = p;

                swapped = 1;
            }
            else // brak zamainy
            {
                p = p->next;
            }
        }

        sortedFromHere = p;

    } while(swapped);
}