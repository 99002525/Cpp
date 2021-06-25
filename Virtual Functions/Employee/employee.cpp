#include "employee.h"

Employee :: Employee(std::string id, std::string name, double salary,int exp): m_empid{id},m_name{name},m_salary{salary},m_exp{exp} { }

Engineer :: Engineer(std::string id, std::string name, double salary,int exp,int code): Employee(id,name,salary,exp), m_projCode{code} { }

Manager :: Manager(std::string id, std::string name,double salary,int exp,int code,int reprtees): Employee(id,name,salary,exp), m_projCode{code}, m_reportees{reprtees} { }
