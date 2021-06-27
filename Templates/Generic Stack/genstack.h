#ifndef GENSTACK_H_INCLUDED
#define GENSTACK_H_INCLUDED
#include<iostream>
constexpr int max_size=50;

template<typename T> class MyStack {
  T m_arr[max_size];
  int m_top;
  int m_maxlen;
  public:
  MyStack();
  MyStack(int len);
  void push(T val);
  T pop();
  T peek() const;
  bool isEmpty() const;
  bool isFull() const;
};

template <typename T> MyStack<T>:: MyStack(): m_top{-1}, m_maxlen{5} { }
template <typename T> MyStack<T>:: MyStack(int len) : m_maxlen(len), m_top(-1) { }


template <typename T> void MyStack<T>::push(T k)
{
    if (isFull()) {
        std::cout << "Stack is full\n"<< std::endl;
    }
    m_top = m_top + 1;
    m_arr[m_top] = k;
}

template <typename T> bool MyStack<T>::isEmpty() const
{
    if (m_top == -1)
        return 1;
    else
        return 0;
}

template <typename T> bool MyStack<T>::isFull() const
{
    if (m_top == (max_size - 1))
        return 1;
    else
        return 0;
}

template <typename T> T MyStack<T>::pop()
{
    T popped_element = m_arr[m_top];
    m_top--;
    return popped_element;
}
template <typename T> T MyStack<T>::peek() const
{
    if (!isEmpty()) {
        return m_arr[m_top];
    }
    else {
        std::cout << "The stack is empty" << std::endl;
    }
}

#endif // GENSTACK_H_INCLUDED
