#include<bits/stdc++.h>
using namespace std;
// void insertionFront();
// void insertionRear();
// void insertionMiddle();
void insertion();
void display();
void deletion();
struct node
{
    int data;
    node *next;
};
node *head, *newnode, *temp;
//node =(node *)malloc(sizeof(node));
int ch;

int main()
{
    while(1)
    {
        cout<<"ENTER CHOICE\n1. INSERT \n2.DELETE\n3. DISPLAY\n______________________\n";
        cin>>ch;
        switch(ch)
        {
            case 1:
            insertion();
            break;

            case 2:
            deletion();
            break;

            case 3:
            display();
            break;

            default:
            cout<<"WRONG CHOICE\nEXITED";
            exit(1);
        }
    }
    return 0;
}
void insertion()
{

}


