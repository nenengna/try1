#ifndef HEADER7_H_INCLUDED
#define HEADER7_H_INCLUDED

typedef int infotype;
typedef struct elmStack *address;

struct elmStack {
    infotype info;
    address next;
};
struct Stack {
    address top;
};

void createStack(Stack *S);
address alokasi (infotype x);
void push(Stack *S, address P);
address pop (Stack *S);
void printInfo(Stack S);
void createHanoi(Stack *S, int n);
bool Move (Stack *A, Stack B);
bool isComplete(Stack S, int n);

#endif // HEADER7_H_INCLUDED
