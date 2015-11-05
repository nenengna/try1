#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>
#include "header7.h"

using namespace std;

void createStack(Stack *S){
    S -> top = NULL;
}

address alokasi (infotype x){
    address newElement = new elmStack;
    newElement -> info = x;
    newElement -> next = NULL;
    return newElement;
}

void push(Stack *S, address P){
    P -> next = NULL;
    P -> next = S -> top;
    S -> top = P;
}

address pop (Stack *S){
    address P;
    P = S -> top;
    S -> top = S -> top -> next;
    return P;
}

void printInfo(Stack S){
    address it = S.top;
    if (it == NULL)
    {
        cout<<"Data Kosong"<<endl;
        cout << "\n";
        return;
    }
    while (it!=0){
        if (it -> next == NULL){
            cout << it -> info<<endl;
        }
        else{
            cout << it -> info<<" - ";
        }
        it = it -> next;
   }
   cout << "\n";
}

void createHanoi(Stack *S, int n){
    infotype x;
    address P;
    int i = n;
    while (i != 0){
        x = i;
        P = alokasi(x);
        push(S, P);
        i--;
    }
}

bool Move (Stack *A, Stack B){
    address P;
    if (A -> top != NULL && A -> top < B.top){
        P = pop(A);
        push(&B,P);
        return true;
    }
    else{
        return false;
    }
}

bool isComplete(Stack S, int n){
    address it = S.top;
    address tmp;
    bool asc = false;
    int jum=1;
    int i,j;
    while (it!=0){
        it = it -> next;
        jum++;
    }
    for(i=n; i=2; i--){
        for(j=2; j=i; j++){
            tmp = it;
            it = it -> next;
            it -> next = tmp;
        }
    }
    asc = true;
    if(jum==n && asc==true ){
        return true;
    }
    else{
        return false;
    }
}
