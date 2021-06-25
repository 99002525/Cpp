#ifndef CUSTOMER_H_INCLUDED
#define CUSTOMER_H_INCLUDED
#define COST_PER_MIN 0.1
enum AccountType {
  Prepaid,
  Postpaid
};

class CustomerBase {
 protected:
  std::string m_custId;
  std::string m_custName;
  std::string m_phone;
  AccountType m_type;
  double m_balance;
 public:
  CustomerBase();
  CustomerBase(std::string,std::string,std::string,double);
  CustomerBase(std::string,std::string,std::string);
  CustomerBase(const CustomerBase&);
  virtual void credit(double)=0;           //recharge or billPay
  virtual void makeCall(double)=0;
  double getBalance() const;
  virtual void dispay() const=0;
};

class PrepaidCustomer : public CustomerBase {
  void recharge(double);
  public:
  PrepaidCustomer();
  PrepaidCustomer(std::string,std::string,std::string,double);
  PrepaidCustomer(std::string,std::string,std::string);
  virtual void credit(double amount)
  {
    m_balance += amount;
  }
  virtual void makeCall(double minutes)
  {
      m_balance -= (minutes * COST_PER_MIN);
  }
  double getBalance() const;
  virtual void dispay() const
  {
    std::cout << "Customer Id : " << m_custId << std::endl;
    std::cout << "Customer Name : " << m_custName << std::endl;
    std::cout << "Phone Number : " << m_phone << std::endl;
    std::cout << "Balance: " << m_balance << std::endl;
    std::cout << "Type : PREPAID" << std::endl;
    std::cout << "----------------------------------------------------------------------" << std::endl;
  }
};
class PostpaidCustomer : public CustomerBase {
  void billPay(double);
  int m_billDate;
  public:
  PostpaidCustomer();
  PostpaidCustomer(std::string,std::string,std::string,double,int);
  PostpaidCustomer(std::string,std::string,std::string);
  virtual void credit(double amount)
  {
    m_balance -= amount;
  }
  virtual void makeCall(double minutes)
  {
      m_balance += (minutes * COST_PER_MIN);
  }
  double getBalance() const;
  virtual void dispay() const
  {
    std::cout << "Customer Id : " << m_custId << std::endl;
    std::cout << "Customer Name : " << m_custName << std::endl;
    std::cout << "Phone Number : " << m_phone << std::endl;
    std::cout << "Balance: " << m_balance << std::endl;
    std::cout << "Type : POSTPAID" << std::endl;
    std::cout << "**********************************************************************************" << std::endl;
  }
};


#endif // CUSTOMER_H_INCLUDED
