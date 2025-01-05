// input restricted double ended queue.
#include <stdio.h>
#include <stdlib.h>
int q[5];
int front = -1, rear = -1;
int isempty(){
    if (front == -1)
    return 1;
    else
    return 0;
}
int isfull(){ //isfull will be check queue is full or not 
    if (rear == 4)
        return 1;
    else
        return 0;
}
void enque(int v){
    if (isfull()) //it will check if function returns 1 then it entered in loop 0 for else block: bool fun
        printf("\n Queue is full !!");
    else
    {
        if (front == -1)
        {
            front = 0;
            rear = 0;
        }
        else
            rear = rear + 1;
        q[rear] = v;
    }
}
void display()
{
    int i;
    if (isempty()) //bool value 
        printf("\n queue is empty!!");
    else
    {
        printf("\n Display Queue => \n");
        for (i = front; i <= rear; i++)
            printf("\n %d", q[i]);
    }
}
void main(){
    int k, c, v;
    while (1) //infinite loop:
    {
        printf("\n ------------------Queue operations------------------");
        printf("\n 1 Insertion");
        printf("\n 2 Deletion");
        printf("\n 3 Display");
        printf("\n 4 Exit !!");
        printf("\n Enter your choise: ");
        scanf("%d", &c);
        switch (c){
        case 1:
            printf("\n enter element: ");
            scanf("%d", &v);
            enque(v);
            break;
        case 2:
            printf("\n 1  Delete from frontend ");
            printf("\n 2 Delete form rearend ");
            printf("\n enter your choice:");
            scanf("%d",&k);
            switch (k){
            case 1:
                if (isempty()){
                    printf("\n queue is empty!!");
                    break;
                }
                else{
                    k = q[front];  
                    printf("\n Deleted element from forntend is %d", k);
                    if (front == rear)
                        front = rear = -1;
                    else
                        front++;
                }

                break;
            case 2:
                if (isempty())
                    printf("\n queue is empty!!");
                else{
                    k = q[rear];
                    printf("\n deleted element from back end  is %d",k);
                    if (front == rear)
                        front = rear = -1;
                    else
                        rear--;
                }
            }
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        }
    }
}
