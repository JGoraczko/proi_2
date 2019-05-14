//
// Created by jakub on 14.05.19.
//

#include "CycList.h"

template <typename T>
CycList<T>::CycList(){
    head = nullptr;
}

template <typename T>
T* CycList<T>::getHead() {

    if(head != nullptr)
        return head->data;
    else
        return nullptr;
}

template <typename T>
void CycList<T>::push(T data) {
  Node<T>* n_node =  new Node<T>(data);
  n_node->data = data;
  if(head == nullptr)
  {
      head = n_node;
      head->next = &head;
  } else
  {
      n_node->next = head.next;
      head->next = &n_node;
      head = n_node;
  }
}

template <typename T>
void CycList<T>::pop() {
    if(head == nullptr)
        return;
    else if(head->next == &head)
        delete head;
    else
    {
        Node<T> *to_pop = head->next;
        head->next = to_pop->next;
        delete to_pop;
    }
}

template <typename T>
CycList<T>::~CycList() {
    while(head != nullptr)
        pop();
}