#ifndef ___IntDeque
#define ___IntDeque

typedef struct {
    int max;
    int num;
    int front;
    int rear;
    int *que;
} IntDeque;

int Initialize(IntDeque *q, int max);

int EnqueFront(IntDeque *q, int x);

int EnqueRear(IntDeque *q, int x);

int DequeFront(IntDeque *q, int *x);

int DequeRear(IntDeque *q, int *x);

int PeekFront(const IntDeque *q, int *x);

int PeekRear(const IntDeque *q, int *x);

void Clear(IntDeque *q);

int Capacity(const IntDeque *q);

int Size(const IntDeque *q);

int IsEmpty(const IntDeque *q);

int IsFull(const IntDeque *q);

int Search(const IntDeque *q, int x);

int Search2(const IntDeque *q, int x);

void Print(const IntDeque *q);

void Terminate(IntDeque *q);

#endif
