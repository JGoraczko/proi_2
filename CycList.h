//
// Created by jakub on 14.05.19.
//

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
    T* getHead();
};


#endif //PROI_2_CYCLIST_H
