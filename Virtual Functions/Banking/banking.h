#ifndef BANKING_H_INCLUDED
#define BANKING_H_INCLUDED
#include<iostream>
class AccountBase {
  protected:
  std::string m_accNumber;
  std::string m_accName;
  double m_balance;
  public:
  AccountBase();
  AccountBase(std::string,std::string,double);
  AccountBase(std::string,std::string);
  AccountBase(const AccountBase&);
  virtual void debit(double)=0;
  virtual void credit(double)=0;
  virtual void dispay() const = 0;
  double getBalance() const;
};
class SavingsAccount : public AccountBase {
  public:
  SavingsAccount();
  SavingsAccount(std::string,std::string,double);
  SavingsAccount(std::string,std::string);
  virtual void debit(double amt)
  {
      m_balance -= amt;
  }
  virtual void credit(double amt)
  {
      m_balance += amt;
  }
  virtual void dispay() const
  {
      std::cout << "Account Number :" << m_accNumber << std::endl;
      std::cout << "Name :" << m_accName << std::endl;
      std::cout << "Balance :" << m_balance << std::endl;
      std::cout << "---------------------------------------------------------------------------------------" << std::endl;
  }
};
class CreditAccount : public AccountBase {
  public:
  CreditAccount();
  CreditAccount(std::string,std::string,double);
  CreditAccount(std::string,std::string);
  virtual void debit(double amt)
  {
      m_balance += amt;
  }
  virtual void credit(double amt)
  {
      m_balance -= amt;
  }
  virtual void dispay() const
  {
      std::cout << "Account Number :" << m_accNumber << std::endl;
      std::cout << "Name :" << m_accName << std::endl;
      std::cout << "Balance :" << m_balance << std::endl;
      std::cout << "***************************************************************************************" << std::endl;
  }
};

#endif // BANKING_H_INCLUDED
