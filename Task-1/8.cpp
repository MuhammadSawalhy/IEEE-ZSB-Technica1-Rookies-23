#include <iostream>

template <typename T> struct Node;
template <typename T> struct LinkedList;

template <typename T>
struct Node {
  Node<T> *next = nullptr;
  Node<T> *prev = nullptr;
  LinkedList<T> *linked_list;
  T value;

  Node(LinkedList<T> *linked_list) : linked_list(linked_list){};
  Node(LinkedList<T> *linked_list, T value) : linked_list(linked_list), value(value) {};
  ~Node() { erase(); }

  void insert_after(T value) {
    Node<T> *node = new Node<T>(linked_list, value);
    if (next == nullptr) linked_list->tail = node; // I was the tail
    else next->prev = node;

    node->prev = this;
    this->next = node;
  }

  void insert_before(T value) {
    Node<T> *node = new Node<T>(linked_list, value);
    if (prev == nullptr) linked_list->head = node;
    else prev->next = node;

    node->next = this;
    this->prev = node;
  }

  void erase() {
    // modify the contianing linked list
    if (this == linked_list->head) linked_list->head = linked_list->head->next;
    if (this == linked_list->tail) linked_list->tail = linked_list->tail->prev;

    // change links locally
    if (prev != nullptr) prev->next = next;
    if (next != nullptr) next->prev = prev;
  }
};


template <typename T>
struct LinkedList {
  Node<T> *head = nullptr;
  Node<T> *tail = nullptr;

  void append(T value) {
    if (tail == nullptr) {
      tail = head = new Node<T>(this, value);
      return;
    }

    auto node = new Node<T>(this, value);
    node->prev = tail;
    tail->next = node;
    tail = node;
  }

  void prepend(T value) {
    if (head == nullptr) {
      tail = head = new Node<T>(this, value);
      return;
    }

    auto node = new Node<T>(this, value);
    node->next = head;
    head->prev = node;
    head = node;
  }

  bool empty() {
    return head == nullptr;
  }
};

int main() {
  LinkedList<int> list;

  list.append(1);
  // 1
  list.prepend(2);
  // 2 1
  list.tail->insert_after(3);
  // 2 1 3
  list.head->next->insert_before(4);
  // 2 4 1 3

  auto current = list.head;
  while (current != nullptr) {
    std::cout << current->value << " ";
    current = current->next;
  }
  std::cout << std::endl;

  list.tail->prev->erase();
  list.head->erase();
  // 4 3

  current = list.head;
  while (current != nullptr) {
    std::cout << current->value << " ";
    current = current->next;
  }
  std::cout << std::endl;

  return 0;
}
