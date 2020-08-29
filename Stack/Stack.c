//
// Created by freestyle on 2020/8/29.
//
#include <stdlib.h>
#include "Stack.h"


Stack* Create(){
    Stack *s = (Stack*)malloc(sizeof(Stack));
    s->base = (Element*)malloc(sizeof(Element) * STACK_INIT_SIZE);
    if (!s->base) {
        exit(ERROR);
    }
    s->top = s->base;
    s->size = STACK_INIT_SIZE;
    return s;
}

Status Destroy(Stack *s) {
    if (s->base != NULL) {
        free(s->base);
    }
    free(s);
    s = NULL;
    return OK;
}

Status Push(Stack *s, Element e) {
    //need more space
    if (s->top - s->base >= s->size) {
        s->base = (Element *)realloc(s->base,sizeof(Element) * (s->size + STACK_INCREMENT));
        if (!s->base) {
            exit(ERROR);
        }
        s->top = s->base + s->size;
        s->size += STACK_INIT_SIZE;
    }
    *(s->top) = e;
    s->top++;
    return OK;

}

Element* Pop(Stack *s) {
    if (IsEmpty(s)){
        return NULL;
    }
    s->top--;
    return s->top;
}

Element* Peek(Stack *s) {
    if (IsEmpty(s)) {
        return NULL;
    }
    return s->top - 1;
}

Status IsEmpty(Stack *s) {
    if (s->top - s->base == 0) {
        return TRUE;
    } else {
        return FALSE;
    }
}