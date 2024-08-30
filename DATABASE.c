/*
NAME:KAVYANSH MEНТА
COURSE: BCA
DATE: 25/4/24
ENROLLMENT NO-001214002023
WAP to implement Student Database using Linked List with the following structure
  Name   Rollno  Marks of 5 subjects  Average  Result, If the average < 50, then print ‘Fail’, otherwise ‘Pass’.*/

#include<stdio.h>
#include<stdlib.h>
struct student
{
    char name[50];
    int rollno, sub1, sub2, sub3, sub4, sub5;
    struct student *next;
}*s, *e, *temp;
void main()
{
    int choice, total;
    do{
        printf("\nEnter 1 to input record");
        printf("\nEnter 2 to display records");
        scanf("%d",&choice);
        temp=(struct student *)malloc(sizeof(struct student));
        switch(choice)
        {
            case 1:
                printf("Enter Name:");
                scanf("%s",&temp->name);
                printf("Enter Rollno:");
                scanf("%d",&temp->rollno);
                printf("Enter 5 subject marks:");
                scanf("%d",&temp->sub1);
                scanf("%d",&temp->sub2);
                scanf("%d",&temp->sub3);
                scanf("%d",&temp->sub4);
                scanf("%d",&temp->sub5);
                if(s==NULL)
                {
                    s=e=temp;
                }
                else
                {
                    e->next=temp;
                    e=temp;
                }
                e->next=NULL;
            break;
            case 2:
                printf("student records: \n");
                temp=s;
                while(temp!=NULL)
                {
                    printf("%s ",temp->name);
                    printf("%d ",temp->rollno);
                    printf("%d ",temp->sub1);
                    printf("%d ",temp->sub2);
                    printf("%d ",temp->sub3);
                    printf("%d ",temp->sub4);
                    printf("%d ",temp->sub5);
                    total = temp->sub1 + temp->sub2 + temp->sub3 + temp->sub4 + temp->sub5;
                    if(total/5>50)
                        printf("Pass ");
                    else
                        printf("Fail ");
                    printf("\n");
                    temp=temp->next;
                }
            break;
        }
    }while(choice=!0);
}
