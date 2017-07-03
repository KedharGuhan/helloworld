#include <iostream>
using namespace std;

int queue[10];
int front = 0;
int rear = 0;

void enqueue(int data)
{
    if(front == (rear+1)%10)
    {
        cout << "Queue Full!";
    }
    else
    {
        queue[(++rear)%10] = data;
    }
}

void dequeue()
{
    if(rear == front)
        cout << "Nothing to dequeue";
    else rear--;

}

void printQueue()
{
    if(front == rear)
        cout<<"No queue";
    else{
        int i;
    cout<<endl;
    for(i = front; i <= rear; i++)
    {
        cout<< queue[i]<<endl;
    }
    }
}

int main()
{
    int i;
    while(1)
    {
        cout<<"\n\n1. Enqueue\t\t2. Dequeue\t\t3. Print Queue\n";

    cin >> i;
    switch(i)
    {
        case 1:
            cout << "Enter Data";
            int data;
            cin>>data;
            enqueue(data);
        break;

        case 2:
            dequeue();
        break;

        case 3:
            printQueue();
        break;

        default:
        break;
    }

    }
}
