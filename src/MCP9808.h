#ifndef _H_MCP9808_
#define _H_MCP9808_
#include <Wire.h>
#include <Arduino.h>

struct TempReading
{
    bool readError;
    int temperature;
};


class MCP9808Class
{
private:
    const unsigned char i2c_addr = 24;

    bool selectRegister(unsigned char reg);
public:
    MCP9808Class();

    TempReading readTemp();

};



extern MCP9808Class MCP9808;

#endif