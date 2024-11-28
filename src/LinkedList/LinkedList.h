#pragma once

#include <iostream>
using namespace std;

class Node
{
 public:
  int value;
  Node* next;

  Node(int value)
  {
    this->value = value;
    next = nullptr;
  }
};

class LinkedList
{
 private:
  Node* head;
  Node* tail;
  int length;

 public:
  LinkedList(int value);
  ~LinkedList();

  void append(int value);
  void prepend(int value);
  bool insert(int index, int value);
  void deleteFirst();
  void deleteLast();
  void deleteNode(int index);
  void reverse();

  Node* get(int index);
  bool set(int index, int value);

  void printList();
  Node* getHead();
  Node* getTail();
  int getLength();
};
