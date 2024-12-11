#include <iostream>
using namespace std;

class Node {
 public:
  int value;
  Node* next;

  Node(int value)
  {
    this->value = value;
    next = nullptr;
  }
};

class LinkedList {
 private:
  Node* head;
  Node* tail;
  int length;

 public:
  LinkedList(int value)
  {
    Node* newNode = new Node(value);
    head = newNode;
    tail = newNode;
    length = 1;
  }

  ~LinkedList()
  {
    Node* temp = head;
    while (head) {
      head = head->next;
      delete temp;
      temp = head;
    }
  }

  void append(int value)
  {
    Node* newNode = new Node(value);
    if (length == 0) {
      head = newNode;
      tail = newNode;
    }
    else {
      tail->next = newNode;
      tail = newNode;
    }
    length++;
  }

  Node* findMiddleNode()
  {
    if (!head) return nullptr;
    Node* slow = head;
    Node* fast = head;

    while (fast != tail) {
      slow = slow->next;
      fast = fast->next;
      if (fast->next) {
        fast = fast->next;
      }
    }
    return slow;
  }

  Node* findKthFromEnd(int k)
  {
    if (!head) return nullptr;
    Node* slow = head;
    Node* fast = head;

    int counter = 0;

    while (counter < k - 1) {
      if (fast->next) {
        fast = fast->next;
        counter++;
        continue;
      }
      return nullptr;
    }

    while (fast->next) {
      slow = slow->next;
      fast = fast->next;
    }
    return slow;
  }

  void prepend(int value)
  {
    Node* newNode = new Node(value);
    if (length == 0) {
      head = newNode;
      tail = newNode;
    }
    else {
      newNode->next = head;
      head = newNode;
    }
    length++;
  }

  bool insert(int index, int value)
  {
    if (index < 0 || index > length) return false;
    if (index == 0) {
      prepend(value);
      return true;
    }

    if (index == length) {
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

  void reverse()
  {
    Node* temp = head;
    head = tail;
    tail = temp;
    Node* next = temp->next;
    Node* prev = nullptr;
    for (int i = 0; i < length; i++) {
      next = temp->next;
      temp->next = prev;
      prev = temp;
      temp = next;
    }
  }

  void deleteFirst()
  {
    if (length == 0) return;
    Node* temp = head;
    if (length == 1) {
      head = nullptr;
      tail = nullptr;
    }
    else {
      head = head->next;
    }
    delete temp;
    length--;
  }

  void deleteLast()
  {
    if (length == 0) {
      return;
    }
    Node* temp = head;
    if (length == 1) {
      head = nullptr;
      tail = nullptr;
    }
    else {
      Node* pre = head;
      while (temp->next) {
        pre = temp;
        temp = temp->next;
      }
      tail = pre;
      tail->next = nullptr;
    }
    length--;
    delete temp;
  }

  void deleteNode(int index)
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

  bool hasLoop()
  {
    if (!head) return false;
    Node* slow = head;
    Node* fast = head;

    while (fast->next) {
      slow = slow->next;
      fast = fast->next;

      if (fast->next) {
        fast = fast->next;
      }

      if (slow == fast) {
        return true;
      }
    }
    return false;
  }

  void partitionList(int x)
  {
    if (!head) return;
    Node* m = nullptr;
    Node* n = nullptr;
    Node* i = head;
    Node* j = nullptr;

    while (i) {
      if (x <= i->value) {
        if (!m) {
          m = i;
          j = m;
        }
        else {
          m->next = i;
          m = i;
        }
      }
      else {
        if (!n) {
          n = i;
          head = n;
        }
        else {
          n->next = i;
          n = i;
        }
      }
      i = i->next;
    }

    if (n) {
      n->next = j;
    }
    if (m) {
      m->next = nullptr;
      tail = m;
    }
  }

  void removeDuplicates()
  {
    if (!head) return;
    Node* current = head;
    Node* runner = current->next;
    Node* prev = current;

    while (current) {
      if (runner != current && current->value == runner->value) {
        if (runner->next) {
          prev->next = runner->next;
          length--;
        }
        else {
          prev->next = nullptr;
          tail = prev->next;
        }
      }

      if (runner->next) {
        prev = runner;
        runner = runner->next;
      }
      else {
        prev = nullptr;
        runner = head;
        current = current->next;
      }
    }
  }

  int binaryToDecimal() {
    Node* current = head;
    int num = 0;
    while(current){
      num = num * 2 + current->value;
      current = current->next;
    }
    return num;
  }

  Node* get(int index)
  {
    if (index < 0 || index >= length) return nullptr;
    Node* temp = head;
    for (int i = 0; i < index; i++) {
      temp = temp->next;
    }
    return temp;
  }

  bool set(int index, int value)
  {
    Node* temp = get(index);
    if (temp) {
      temp->value = value;
      return true;
    }
    return false;
  }

  void printList()
  {
    Node* temp = head;
    while (temp) {
      cout << temp->value << endl;
      temp = temp->next;
    }
  }

  Node* getHead()
  {
    cout << "Head: " << head->value << endl;
    return head;
  }

  Node* getTail()
  {
    cout << "Tail: " << tail->value << endl;
    return tail;
  }

  int getLength()
  {
    cout << "Length: " << length << endl;
    return length;
  }
};
