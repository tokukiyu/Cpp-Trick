#include <iostream>
using namespace std;
struct node
{
    int salary;
    string name;
    int age;
    node *next;
    node *pre;
};
node *head = NULL;
void insertEnd(int salary)
{
    node *newnode = new node;
    newnode->salary = salary;
    if (head == NULL)
    {
        head = newnode;
        // newnode->next = NULL;
    }
    else
    {
        node *lst = head;
        while (lst->next != NULL)
            lst = lst->next;
        lst->next = newnode;
        newnode->next = NULL;
    }
}
void insertAtbeggin(int salary)
{
    node *newnode = new node;
    newnode->salary = salary;
    if (head == NULL)
    {
        head = newnode;
        // newnode->next = NULL;
    }
    else
    {
        newnode->next = head;
        head = newnode;
    }
}
void insertAt(int salary, int pos)
{
    node *newnode = new node;
    newnode->salary = salary;
    node *val = head;
    node *pre = head;
    for (int i = 1; i < pos && val->next != NULL; i++)
    {
        val = val->next;
    }
    newnode->next = val->next;
    val->next = newnode;
}
void display()
{
    node *current = head;
    while (current != NULL)
    {
        cout << "salary: " << current->salary << "\n";
        current = current->next;
    }
}
int main(int argc, char const *argv[])
{
    insertEnd(900);
    insertEnd(3000);
    insertEnd(123);
    insertEnd(435);
    display();
    cout << "at beginning \n";
    insertAtbeggin(10);
    display();
    cout << "after inserting at 3 \n";
    insertAt(13, 3);
    display();
    return 0;
}
