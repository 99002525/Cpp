#ifndef EMPLOYEE_H_INCLUDED
#define EMPLOYEE_H_INCLUDED
#include <iostream>
class IEmployee {
  public:
  virtual void payroll()=0;
  virtual void appraisal()=0;
};

class Employee:public IEmployee {
  protected:
  std::string m_empid;
  std::string m_name;
  double m_salary;
  int m_exp;
  public:
  Employee(std::string id, std::string name, double salary,int exp);
  virtual void display()
  {
      std::cout<< "Employee Id :" << m_empid << std::endl;
      std::cout<< "Employee Name:" << m_name << std::endl;
      std::cout<< "Employee Salary:" << m_salary << std::endl;
      std::cout<< "Employee Exp:" << m_exp << std::endl;
      std::cout<< "-------------------------------------------------------------------------" << std::endl;
  }
};
class Engineer : public Employee {
  int m_projCode;
  public:
  Engineer(std::string id, std::string name, double salary,int exp,int code);
  virtual void payroll()
  {
      std::cout << "Payroll ID 300" << std::endl;
  }
  virtual void appraisal()
  {
      m_salary += (0.05*m_salary);
  }
  virtual void display()
  {
      std::cout<< "Engineer Id :" << m_empid << std::endl;
      std::cout<< "Engineer Name:" << m_name << std::endl;
      std::cout<< "Engineer Salary:" << m_salary << std::endl;
      std::cout<< "Engineer Exp:" << m_exp << std::endl;
      std::cout<< "Engineer Project Code:" << m_projCode << std::endl;
      std::cout<< "-------------------------------------------------------------------------" << std::endl;
  }
};
class Manager : public Employee {
  int m_projCode;
  int m_reportees;
  public:
  Manager(std::string id, std::string name,double salary,int exp,int code,int reprtees);
  virtual void payroll()
  {
      std::cout << "Payroll ID 1000" << std::endl;
  }
  virtual void appraisal()
  {
      m_salary += (0.1*m_salary);
  }
  virtual void display()
  {
      std::cout<< "Manager Id :" << m_empid << std::endl;
      std::cout<< "Manager Name:" << m_name << std::endl;
      std::cout<< "Manager Salary:" << m_salary << std::endl;
      std::cout<< "Manager Exp:" << m_exp << std::endl;
      std::cout<< "Manager Project Code:" << m_projCode << std::endl;
      std::cout<< "Manager Reportees Number:" << m_reportees << std::endl;
      std::cout<< "-------------------------------------------------------------------------" << std::endl;
  }
};


#endif // EMPLOYEE_H_INCLUDED
