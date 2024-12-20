// Created by hfwei on 2024/12/19.

#ifndef LL_H
#define LL_H
#include <stdbool.h>

// adding code here

// types
// macro
// function declarations
// function implementations (short, inline)

typedef struct node {
  int val;  // void *val;
  struct node *next;  // struct node (incomplete type)
} Node;

// head, tail
typedef struct ll {
  Node *head;
  Node *tail;
  // int size;
} LinkedList;

void Init(LinkedList *list);
void Free(LinkedList *list);

bool IsEmpty(LinkedList *list);
bool IsSingleton(LinkedList *list);

int GetHeadVal(LinkedList *list);
void Print(LinkedList *list);

void Append(LinkedList *list, int num);
void Delete(LinkedList *list, Node *prev);

Node *Search(LinkedList *list, int num);
Node *Insert(LinkedList *list, Node *prev, int num);

#endif //LL_H