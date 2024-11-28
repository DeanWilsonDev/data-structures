#include "./LinkedList.h"

LinkedList::LinkedList(int value)
{
  Node* newNode = new Node(value);
  head = newNode;
  tail = newNode;
  length = 1;
}

LinkedList::~LinkedList()
{
  Node* temp = head;
  while (head)
  {
    head = head->next;
    delete temp;
    temp = head;
  }
}

void LinkedList::append(int value)
{
  Node* newNode = new Node(value);
  if (length == 0)
  {
    head = newNode;
    tail = newNode;
  }
  else
  {
    tail->next = newNode;
    tail = newNode;
  }
  length++;
}

void LinkedList::prepend(int value)
{
  Node* newNode = new Node(value);
  if (length == 0)
  {
    head = newNode;
    tail = newNode;
  }
  else
  {
    newNode->next = head;
    head = newNode;
  }
  length++;
}

bool LinkedList::insert(int index, int value)
{
  if (index < 0 || index > length) return false;
  if (index == 0)
  {
    prepend(value);
    return true;
  }
  if (index == length)
  {
    append(value);
    return true;
  }
  Node* newNode = new Node(value);
  Node* temp = get(index - 1);
  newNode->next = temp->next;
  temp->next = newNode;
  length++;
  return true;
}

void LinkedList::reverse()
{
  Node* temp = head;
  head = tail;
  tail = temp;
  Node* next = temp->next;
  Node* prev = nullptr;
  for (int i = 0; i < length; i++)
  {
    next = temp->next;
    temp->next = prev;
    prev = temp;
    temp = next;
  }
}

void LinkedList::deleteFirst()
{
  if (length == 0) return;
  Node* temp = head;
  if (length == 1)
  {
    head = nullptr;
    tail = nullptr;
  }
  else
  {
    head = head->next;
  }
  delete temp;
  length--;
}

void LinkedList::deleteLast()
{
  if (length == 0)
  {
    return;
  }
  Node* temp = head;
  if (length == 1)
  {
    head = nullptr;
    tail = nullptr;
  }
  else
  {
    Node* pre = head;
    while (temp->next)
    {
      pre = temp;
      temp = temp->next;
    }
    tail = pre;
    tail->next = nullptr;
  }
  length--;
  delete temp;
}

void LinkedList::deleteNode(int index)
{
  if (index < 0 || index >= length) return;
  if (index == 0) return deleteFirst();
  if (index == length - 1) return deleteLast();

  Node* prev = get(index - 1);
  Node* temp = prev->next;
  
  prev->next = temp->next;
  delete temp;
  length--;
}

Node* LinkedList::get(int index)
{
  if (index < 0 || index >= length) return nullptr;
  Node* temp = head;
  for (int i = 0; i < index; i++)
  {
    temp = temp->next;
  }
  return temp;
}

bool LinkedList::set(int index, int value)
{
  Node* temp = get(index);
  if (temp)
  {
    temp->value = value;
    return true;
  }
  return false;
}

void LinkedList::printList()
{
  Node* temp = head;
  while (temp)
  {
    cout << temp->value << endl;
    temp = temp->next;
  }
}

Node* LinkedList::getHead()
{
  cout << "Head: " << head->value << endl;
  return head;
}

Node* LinkedList::getTail()
{
  cout << "Tail: " << tail->value << endl;
  return tail;
}

int LinkedList::getLength()
{
  cout << "Length: " << length << endl;
  return length;
}
