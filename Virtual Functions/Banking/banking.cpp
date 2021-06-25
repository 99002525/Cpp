#include "banking.h"
#include<iostream>

AccountBase :: AccountBase() : m_accNumber("1234"), m_accName("ABCDE"), m_balance(0.0) { }
AccountBase :: AccountBase(std::string accNumber,std::string accName,double balance) : m_accNumber(accNumber), m_accName(accName), m_balance(balance) { }
AccountBase :: AccountBase(std::string accNumber,std::string accName): m_accNumber(accNumber), m_accName(accName), m_balance{100.0} { }
AccountBase :: AccountBase(const AccountBase& ref): m_accNumber{ref.m_accNumber}, m_accName{ref.m_accName}, m_balance{ref.m_balance} { }
double AccountBase :: getBalance() const { return m_balance; }

SavingsAccount :: SavingsAccount() : AccountBase("1111" , "AAAA", 200.0) { };
SavingsAccount :: SavingsAccount(std::string accNumber, std::string accName, double balance): AccountBase(accNumber, accName, balance) { }
SavingsAccount :: SavingsAccount(std::string accNumber, std::string accName): AccountBase(accNumber,accName) { }



CreditAccount :: CreditAccount() : AccountBase("2222" , "BBBB", 200.0) { };
CreditAccount :: CreditAccount(std::string accNumber, std::string accName, double balance): AccountBase(accNumber, accName, balance) { }
CreditAccount :: CreditAccount(std::string accNumber, std::string accName): AccountBase(accNumber,accName) { }

