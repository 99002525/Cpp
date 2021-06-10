#include <iostream>
#include "account.h"

Account:: Account(): m_accNumber("1001"), m_accName("Name"), m_balance(500.0) { };
Account:: Account(std::string accNumber,std::string accName,double balance):  m_accNumber(accNumber), m_accName(accName), m_balance(balance) { };
Account:: Account(std::string accNumber,std::string accName):  m_accNumber(accNumber), m_accName(accName), m_balance(100.0) { };
Account:: Account(const Account& ref):  m_accNumber(ref.m_accNumber), m_accName(ref.m_accName), m_balance(ref.m_balance) { };

void Account::debit(double amount){
m_balance -= amount;
}
void Account::credit(double amount){
m_balance += amount;
}

double Account::getBalance() const{
return m_balance;
}

void Account::display() const{
std::cout << "Number:" << m_accNumber << std::endl;
std::cout << "Name:" << m_accName << std::endl;
std::cout << "Balance:" << m_balance << std::endl;
}
