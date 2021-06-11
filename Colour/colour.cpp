#include<iostream>
#include<sstream>
#include"colour.h"
  //Color(std::string);       //Hex value as string
  //Color(color_t);           //enum
  //void invert();
  //void display() const;

Color:: Color(): m_r(0), m_g(0), m_b(0) { };
Color:: Color(int r,int g,int b): m_r(r), m_g(g), m_b(b) { };
Color:: Color(int Value) {
    m_b = (Value & 0xFF);
    m_g = (Value >> 8) & 0xFF;
    m_r = (Value >> 16) & 0xFF;
}
Color:: Color(std::string string_dec)
{
    int decimal_command = 0;
	uint8_t temp = 0;
	uint8_t pos = 0;
	while(string_dec[pos] != '\0')
	{
		if((string_dec[pos] >= 48) && (string_dec[pos] <= 57))
		{
			temp = string_dec[pos] - 48;
		}
		else if((string_dec[pos] >= 65) && (string_dec[pos] <= 70))
		{
			temp = string_dec[pos] - 55;
		}
		decimal_command = decimal_command * 16 + temp;
		pos += 1;
	}
    m_b = (decimal_command & 0xFF);
    m_g = (decimal_command >> 8) & 0xFF;
    m_r = (decimal_command >> 16) & 0xFF;
}

Color:: Color(color_t Value)
{
    m_b = (Value & 0xFF);
    m_g = (Value >> 8) & 0xFF;
    m_r = (Value >> 16) & 0xFF;
}

void Color::invert() {
    m_r = 255 - m_r;
    m_g = 255 - m_g;
    m_b = 255 - m_b;
}

void Color::display() const {
    std::cout << "r=" << m_r << std::endl;
    std::cout << "g=" << m_g << std::endl;
    std::cout << "b=" << m_b << std::endl;
    std::cout << "--------------------------------------------------------------" << std::endl;
}
