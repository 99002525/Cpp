#ifndef COMPLEX_H_INCLUDED
#define COMPLEX_H_INCLUDED
#include<iostream>
template<class T> class Complex {
  T m_real;
  T m_image;
  public:
  Complex();
  Complex(T,T);
  void display();
};

template<class T> Complex<T>:: Complex() : m_real{0},m_image{0} { }
template<class T> Complex<T>:: Complex(T real,T image) : m_real{real}, m_image{image} { }

template<class T> void Complex<T>::display()
{
    std::cout << m_real << "i"<<m_image<<std::endl;
}
#endif // COMPLEX_H_INCLUDED
