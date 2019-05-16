
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
    int size;
    Node<T>* head;
public:
    CycList();
    CycList(CycList&);
    ~CycList();
    void push(T data);
    void pop();
    T getData();
    int getSize();
    template <typename U>
    friend std::ostream& operator<<(std::ostream &stream, const CycList<U> &list);
};
//**********IMPLEMENTACJA****************

template <typename T>
CycList<T>::CycList(){
    head = nullptr;
    size = 0;
}

template <typename T>
T CycList<T>::getData() {

        return head->next->data;
}

template <typename T>
void CycList<T>::push(T data) {
    Node<T>* n_node =  new Node<T>(data);
    ++size;
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
    if(head != nullptr)
    {
        if (head->next == head) {
            delete head;
            head = nullptr;
        } else {
            Node<T> *to_pop = head->next;
            head->next = to_pop->next;
            delete to_pop;
        }
        --size;
    }
}

template <typename T>
CycList<T>::~CycList() {
     while(head != nullptr)
        pop();
}

template <typename T>
int CycList<T>::getSize() {
    return  size;
}

template <typename T>
CycList<T>::CycList(CycList& list) {
    head = nullptr;
    size = 0;
    if(list.head != nullptr)
    {
        Node<T>* temp = list.head;
        do
        {
            temp = temp->next;
            push(temp->data);
        } while (temp != list.head);
    }
}


template <typename T>
std::ostream& operator<<(std::ostream &stream, const CycList<T> &list){
    if(list.head == nullptr)
        return stream;
    Node<T>* temp = list.head;
    do
    {
      temp = temp->next;
      if(typeid(T) == typeid(int))
          stream << temp->data << ", ";
      else
        stream << temp->data << "\n";
    } while (temp != list.head);

    return stream;

}

#endif //PROI_2_CYCLIST_H
