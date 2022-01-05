#include <bits/stdc++.h>

using namespace std;

struct node
{
    int data;
    struct node *next;
} *head = NULL;

void push(int value)
{
    struct node *tmp;
    tmp = new node();

    if (!tmp)
    {
        cout << "\n Memory Error!";
    }
    tmp->data = value;
    tmp->next = NULL;

    if (head == NULL)
    {
        head = tmp;
        cout << "Element insert. \n";
    }
    else
    {
        struct node *trav = NULL;
        trav = head;
        while (trav->next != NULL)
        {
            trav = trav->next;
        }
        trav->next = tmp;

        cout << "Element inserted.\n";
    }
}

void pop()
{
    if (head == NULL)
    {
        cout << "Stack is Empty \n";
    }
    else if (head->next == NULL)
    {
        cout << "Element " << head->data << " has been deleted.(head)\n";
        head = NULL;
        free(head);
    }
    else
    {
        struct node *trav = NULL, *prev = NULL;
        prev = head;
        trav = prev->next;
        while (trav->next != NULL)
        {
            trav = trav->next;
            prev = prev->next;
        }

        prev->next = NULL;
        cout << "Element " << trav->data << " has been deleted.\n";
        free(trav);
    }
}

void peek()
{

    if (head == NULL)
    {
        cout << " Stack is Empty.\n";
    }
    else
    {
        struct node *trav = NULL;
        trav = head;
        while (trav->next != NULL)
        {
            trav = trav->next;
        }
        cout << "Element : " << trav->data << "\n";
    }
}

int main()
{
    int value;
    char choice;
    while (true)
    {
        cout << "\r\n Stack Operation. \n 1) 'i' for input. \n 2) 'd' for delete. \n 3) 'p' for peek/display. \n 4) 'e' for exit. \n Enter choice: ";
        cin >> choice;

        if (choice == 'i')
        {
            cout << " Enter element to insert: ";
            cin >> value;
            push(value);
        }
        else if (choice == 'd')
        {
            pop();
        }
        else if (choice == 'p')
        {
            peek();
        }
        else
        {
            cout << " Program terminated.\n";
            break;
        }
    }

    return 0;
}