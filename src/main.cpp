#include "LinkedList.cpp"

int main()
{
  cout << "\n------ Test: PartitionSingleElement ------\n";

  LinkedList list(1);

  cout << "BEFORE:    ";
  list.printList();

  cout << "partitionList(3)\n";
  cout << "EXPECTED:  1\n";

  list.partitionList(3);

  cout << "ACTUAL:    ";
  list.printList();

  cout << "\n------ Test: PartitionMixedNumbers ------\n";

  LinkedList list2(1);
  list2.append(4);
  list2.append(3);
  list2.append(2);
  list2.append(5);
  list2.append(2);

  cout << "BEFORE:    ";
  list2.printList();

  cout << "partitionList(3)\n";
  cout << "EXPECTED:  1 -> 2 -> 2 -> 4 -> 3 -> 5\n";

  list2.partitionList(3);

  cout << "ACTUAL:    ";
  list2.printList();
}
