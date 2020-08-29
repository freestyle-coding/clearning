//
// Created by freestyle on 2020/8/29.
//

#ifndef CLEARNING_STACK_H
#define CLEARNING_STACK_H
#include <stdio.h>
#include "../Common/Status.h"


#define STACK_INIT_SIZE 20
#define STACK_INCREMENT  10




typedef struct {
    int val;
} Element;


typedef struct {
    Element *top;
    Element *base;
    int size;

} Stack;

Stack* Create();

Status Destroy(Stack *s);

Status Push(Stack *s, Element e);

Element* Pop(Stack *s);

Element* Peek(Stack *s);

Status IsEmpty(Stack *s);



#endif //CLEARNING_STACK_H
