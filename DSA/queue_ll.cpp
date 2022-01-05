#include <bits/stdc++.h>

using namespace std;

struct node
{
    int data;
    struct node *next;
} *front = NULL;

void Enqueue(int value)
{
    struct node *tmp;

    tmp = new node();
    if (!tmp)
    {
        cout << "Memory Error.\n";
    }
    tmp->data = value;
    tmp->next = NULL;

    if (front == NULL)
    {
        front = tmp;
        cout << "Element inserted.\n";
    }
    else
    {
        struct node *trav = NULL;
        trav = front;
        while (trav->next != NULL)
        {
            trav = trav->next;
        }

        trav->next = tmp;
        cout << "Element inserted.\n";
    }
}

void dequeue()
{
    if (front == NULL)
    {
        cout << "Queue is Empty.\n";
    }
    else
    {
        struct node *trav = front;

        front = front->next;
        cout << "Element " << trav->data << " has been deleted. \n";
        free(trav);
    }
}

void peek()
{
    if (front == NULL)
    {
        cout << "Queue is Empty.\n";
    }
    else
    {
        cout << "Element :" << front->data << "\n";
    }
}

int main()
{
    int value;
    char choice;

    while (true)
    {
        cout << "Queue Operation\n 1) 'e' for Enqueue/Insert. \n 2) 'd' for dequeue/delete. \n 3) 'p' for peek/display. \n 4) 'q' for exit. \n Enter choice: ";
        cin >> choice;

        if (choice == 'e')
        {
            cout << "Enter Element to insert: ";
            cin >> value;

            Enqueue(value);
        }
        else if (choice == 'd')
        {
            dequeue();
        }
        else if (choice == 'p')
        {
            peek();
        }
        else
        {
            cout << "Program terminated.\n";
            break;
        }
    }
    return 0;
}