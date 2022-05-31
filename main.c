#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0
#define MAXQUEUE 20

typedef struct queue{
 int count;
 int front;
 int rear;
 char entry[MAXQUEUE];
}Queue;

void ini_Queue(Queue *q){
 q->count=0;
 q->front=-1;
 q->rear=-1;
}

int IsQueueEmpty(Queue *q){
 if(q->count==MAXQUEUE){
    return (TRUE);
 }
 else
    return (FALSE);
}

void IsQueueFull(Queue *q){
 return (q->count==0);
}

void Remove(char *x,Queue *q){
  if(IsQueueEmpty(q)){
     printf("Queue is Empty");
     exit(1);
  }
  else{
    *x=q->entry[q->front];
    q->front=(q->front+1)%MAXQUEUE;
    q->count--;
  }
}


void insert(char x,Queue *q){

 if(IsQueueFull(q)){
    printf("Queue is full");
    exit(1);
 }
 else{
    q->rear=(q->rear+1)%MAXQUEUE;
    q->entry[q->rear]=x;
    q->count++;
 }

}
