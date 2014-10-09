#pragma once
#include <iostream>
#define ARRAY_MAX_SIZE 6

template <typename T>
class My_Stack{
public:
    My_Stack();
    My_Stack(long _size);
    virtual ~My_Stack();
    void push(T);
    T pop();
    bool isEmpty();
    bool isFull();
private:
    void setSize(long);
    long getSize();
    long arr_size;
    T *arr ;
    long top;
};

template <typename T>
My_Stack<T>::My_Stack(){
    setSize(ARRAY_MAX_SIZE);
    arr = new T[arr_size];
    top = -1;
}

template <typename T>
My_Stack<T>::My_Stack(long _size){
    setSize(_size);
    arr = new T[arr_size];
    top = -1;
}

template <typename T>
My_Stack<T>::~My_Stack(){
    delete[] arr;
}

template <typename T>
void My_Stack<T>::push(T value){
    if(top < arr_size) arr[++top] = value;
}

template <typename T>
T My_Stack<T>::pop(){
    return arr[top--];
}

template <typename T>
long My_Stack<T>::getSize(){
    return arr_size;
}

template <typename T>
void My_Stack<T>::setSize(long val){
    arr_size = val;
}

template <typename T>
bool My_Stack<T>::isFull(){
    return top == (arr_size - 1);
}

template <typename T>
bool My_Stack<T>::isEmpty(){
    return top == -1;
}

