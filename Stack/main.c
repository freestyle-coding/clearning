#include <stdio.h>
#include "Stack.h"

int main() {

    Stack *s = Create();
    Element e1 = {1};
    Element e2 = {2};
    Element e3 = {3};
    Push(s,e1);
    Push(s,e2);
    Push(s,e3);


    Element *e = Peek(s);
    printf("e1 = %d\n",e->val);
    e = Pop(s);
    printf("e2 = %d\n",e->val);
    e = Pop(s);
    printf("e3 = %d",e->val);
    Destroy(s);
    return 0;
}
