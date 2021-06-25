#ifndef IP_H_INCLUDED
#define IP_H_INCLUDED

enum IPClass {
  A,
  B,
  C,
  D
};

class IPAddress {
  uint32_t ipval;
  public:
  IPAddress();
  IPAddress(uint8_t,uint8_t,uint8_t,uint8_t);   //a,b,c,d vals
  IPAddress(std::string);                       //"a.b.c.d" format
  bool isLoopBack() const;
  IPClass getIPClass() const;
  void dispay() const;
};

#endif // IP_H_INCLUDED
