#include<iostream>
#include "customer.h"

Customer:: Customer(): m_custId("LTTS1"),m_custName("MAN"),m_phone("1234567890"), m_balance(0.0), m_type(Prepaid) { };
Customer:: Customer(std::string custId,std::string custName,std::string phone,double balance) : m_custId(custId),m_custName(custName),m_phone(phone), m_balance(balance), m_type(Prepaid) { };
Customer:: Customer(std::string custId,std::string custName,std::string phone) : m_custId(custId),m_custName(custName),m_phone(phone), m_balance(0.0), m_type(Postpaid) { };
Customer:: Customer(const Customer& ref) : m_custId(ref.m_custId),m_custName(ref.m_custName),m_phone(ref.m_phone), m_balance(ref.m_balance), m_type(ref.m_type) { };

void Customer:: credit(double amount){
    m_balance += amount;
}

void Customer:: makeCall(double minutes){
    m_balance -= (minutes * COST_PER_MIN);
}

double Customer:: getBalance() const{
    return m_balance;
}

void Customer:: dispay() const{
    std::cout << "Customer Id : " << m_custId << std::endl;
    std::cout << "Customer Name : " << m_custName << std::endl;
    std::cout << "Phone Number : " << m_phone << std::endl;
    std::cout << "Balance: " << m_balance << std::endl;
    if(m_type == 0)
        std::cout << "Type : PREPAID" << std::endl;
    else
        std::cout << "Type : POSTPAID" << std::endl;
    std::cout << "----------------------------------------------------------------------" << std::endl;
}
