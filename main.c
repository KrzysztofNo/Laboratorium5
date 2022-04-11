#include <stdio.h>
#include <stdlib.h>

int *stack;
int top=-1;

_Bool stack_empty(int top)
{
if (top == -1)
{
printf("Stos jest pusty \n");
return 1;
}
else
{
printf("Stos nie jest pusty \n");
return 0;
}
}

int Top(){
return stack[top];
}

int push(int element){
top++;
stack[top] = element;
}

int pop(){
if (stack_empty(top)==0)
{
top--;
}
}

int main()
{
stack = (int *) malloc(sizeof(int) * 6);

push(1);
push(2);
push(3);
push(4);
push(5);

printf("Stos po dodaniu wartoœci wynosi: \n");

for (int i=0;i<top+1;i++)
{
printf("Stos[%d]: %d \n", i, stack[top-i]);
}
printf("Stos po wykonaniu pop(): \n");
pop();

for (int i=0;i<top+1;i++)
{
printf("Stos[%d]: %d \n", i, stack[top-i]);
}

printf("\n Stos:  %d ", Top());
}
