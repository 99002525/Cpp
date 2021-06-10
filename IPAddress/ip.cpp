#include<iostream>
#include "ip.h"
#include <string>
IPAddress:: IPAddress(): ipval(0) { };
IPAddress:: IPAddress(uint8_t w,uint8_t x,uint8_t y,uint8_t z) {
    ipval = (w<<24)|(x<<16)|(y<<8)|z;
}
IPAddress:: IPAddress(std::string ipadd) {
}

bool IPAddress::isLoopBack() const {
    if(2130706433 == ipval)
        return true;
    else
        return false;
}

IPClass IPAddress::getIPClass() const{
    uint8_t ip = 0;
    ip = (ipval>>24);
    if (ip <= 127)
        return A;
    else if(ip > 127 && ip <=191)
        return B;
    else if(ip > 191 && ip <= 223)
        return C;
    else if(ip > 223 && ip<= 255)
        return D;
}

void IPAddress::dispay() const{
    uint8_t w=0,x =0,y =0,z =0;
    z = ipval & 0xFF;
    y = (ipval>> 8) & 0xFF;
    x = (ipval>> 16) & 0xFF;
    w = (ipval>> 24) & 0xFF;
    std::cout << int(w) << "." << int(x) <<"." << int(y) << "." << int(z) << std::endl;
    std::cout << "-----------------------------------------"<< std::endl;
}
