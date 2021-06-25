#include<iostream>
#include "customer.h"

CustomerBase:: CustomerBase(): m_custId("LTTS1"),m_custName("MAN"),m_phone("1234567890"), m_balance(0.0), m_type(Prepaid) { };
CustomerBase:: CustomerBase(std::string custId,std::string custName,std::string phone,double balance) : m_custId(custId),m_custName(custName),m_phone(phone), m_balance(balance), m_type(Prepaid) { };
CustomerBase:: CustomerBase(std::string custId,std::string custName,std::string phone) : m_custId(custId),m_custName(custName),m_phone(phone), m_balance(0.0), m_type(Postpaid) { };
CustomerBase:: CustomerBase(const CustomerBase& ref) : m_custId(ref.m_custId),m_custName(ref.m_custName),m_phone(ref.m_phone), m_balance(ref.m_balance), m_type(ref.m_type) { };

PrepaidCustomer :: PrepaidCustomer() :  CustomerBase() { }
PrepaidCustomer :: PrepaidCustomer(std::string custId,std::string custName,std::string phone,double balance) :
                    CustomerBase(custId,custName,phone,balance) { }
PrepaidCustomer :: PrepaidCustomer(std::string custId,std::string custName,std::string phone) :
                    CustomerBase(custId,custName,phone) { }

 void PrepaidCustomer :: recharge(double amount) { m_balance += amount;}
double PrepaidCustomer :: getBalance() const { return m_balance;}

PostpaidCustomer :: PostpaidCustomer() : CustomerBase() { }
PostpaidCustomer :: PostpaidCustomer(std::string custId,std::string custName,std::string phone,double balance,int billDate) :
                    CustomerBase(custId,custName,phone,balance), m_billDate{billDate} { }
PostpaidCustomer :: PostpaidCustomer(std::string custId,std::string custName,std::string phone) :
                    CustomerBase(custId,custName,phone),  m_billDate{22} { }
double PostpaidCustomer :: getBalance() const { return m_balance;}
void PostpaidCustomer::billPay(double amount) { m_balance -= amount;}
