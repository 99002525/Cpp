#include "box.h"
#include <iostream>
Box:: Box():m_length(0),m_breadth(0),m_height(0) { };
Box:: Box(int length,int breadth,int height): m_length(length),m_breadth(breadth),m_height(height) { };
Box:: Box(int length):m_length(length),m_breadth(0),m_height(0) { };
Box:: Box(const Box& ref): m_length(ref.m_length),m_breadth(ref.m_breadth),m_height(ref.m_height) { };

int Box::length() const {
return m_length;
}

int Box::height() const {
return m_height;
}

int Box::breadth() const {
return m_breadth;
}

int Box::volume() const {
return m_length*m_height*m_breadth;
}

void Box::dispay() const {
std::cout << m_length << std::endl;
std::cout << m_breadth << std::endl;
std::cout << m_height << std::endl;
}
