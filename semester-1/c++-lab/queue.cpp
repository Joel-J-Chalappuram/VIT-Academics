#include<iostream>
#include<array>
using namespace std;
#define SIZE 5
int queue[SIZE];
int front = -1;
int rear = -1;
//enqueue function
void enqueue(int n){
if(rear == SIZE-1){
cout<<"your queue is full 'overflow condition'";
}
else if(front== -1 && rear == -1){
front = 0;
rear = 0;
queue[rear] = n;
}
else{
rear++;
queue[rear] = n;
}
}
//dequeue function
void dequeue(){

if(front== -1 && rear == -1){
cout<<"your queue is empty 'underflow condition!'";
}
else{
cout<<"The popping element is "<<queue[front];
front++;
}
}
//isfull function
void isFull(){
if(rear == SIZE-1)
{
cout<<"your quesue is full";
}
else{
cout<<"your queue is empty";
}
}

//isEmpty function
void isEmpty(){
if(rear == -1 && front == -1){
cout<<"your queue is empty";
}
else{
cout<<"your queue is full";
}
}
//display function
void display(){
if(rear == -1){
cout<<"The queue is empty";
}
else{
int queueSize = sizeof(queue)/sizeof(queue[0]);
for(int i = 0;i<queueSize;i++)
{
	cout<<queue[i]<<" ";
}
}
}

//peek function
void peek()
{
if(rear == -1){
cout<<"The queue is empty";
}
else{
cout<<queue[rear];
}
}
int main(){
enqueue(6);
enqueue(5);
enqueue(4);
display();
peek();
dequeue();
peek();
display();
}
