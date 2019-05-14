
#include <iostream>
#ifndef PROI_2_CYCLIST_H
#define PROI_2_CYCLIST_H


template <typename T>
class Node
{
public:
    T data;
    Node * next;
    Node(T data) : data(data), next(nullptr) {}
};

template <typename T>
class CycList {

    Node<T>* head;
public:
    CycList();
    ~CycList();
    void push(T data);
    void pop();
    T getHead();
    template <typename U>
    friend std::ostream& operator<<(std::ostream &stream, const CycList<U> &list);
};
//**********IMPLEMENTACJA****************

template <typename T>
CycList<T>::CycList(){
    head = nullptr;
}

template <typename T>
T CycList<T>::getHead() {

        return head->data;
}

template <typename T>
void CycList<T>::push(T data) {
    Node<T>* n_node =  new Node<T>(data);
    n_node->data = data;
    if(head == nullptr)
    {
        head = n_node;
        head->next = head;
    } else
    {
        n_node->next = head->next;
        head->next = n_node;
        head = n_node;
    }
}

template <typename T>
void CycList<T>::pop() {
    if(head == nullptr)
        return;
    else if(head->next == head)
    {
        delete head;
        head = nullptr;
    }
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

template <typename T>
std::ostream& operator<<(std::ostream &stream, const CycList<T> &list){
    if(list.head == nullptr)
        return stream;
    Node<T>* temp = list.head;
    do
    {
      temp = temp->next;
      stream << temp->data << "\n";
    } while (temp != list.head);

    return stream;

}

#endif //PROI_2_CYCLIST_H
