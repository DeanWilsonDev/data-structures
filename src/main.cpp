#include "LinkedList/LinkedList.h"

int main()
{
  LinkedList* list = new LinkedList(4);
  list->append(6);
  list->append(12);
  list->append(33);

  list->getHead();
  list->getTail();
  list->getLength();
  list->printList();

  cout << "-----------------" << endl;

  list->reverse();

  list->getHead();
  list->getTail();
  list->getLength();
  list->printList();
}
