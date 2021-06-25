#ifndef CUSTOMER_H_INCLUDED
#define CUSTOMER_H_INCLUDED
#define COST_PER_MIN 0.1
enum AccountType {
  Prepaid,
  Postpaid
};

class Customer {
  std::string m_custId;
  std::string m_custName;
  std::string m_phone;
  double m_balance;
  AccountType m_type;
  public:
  Customer();
  Customer(std::string,std::string,std::string,double);
  Customer(std::string,std::string,std::string);
  Customer(const Customer&);
  void credit(double);           //recharge or billPay
  void makeCall(double);
  double getBalance() const;
  void dispay() const;
};


#endif // CUSTOMER_H_INCLUDED
