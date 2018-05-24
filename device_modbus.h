//
// Created by long on 2018/5/18.
//

#ifndef YANXIANG_DEVICE_MODBUS_H
#define YANXIANG_DEVICE_MODBUS_H

#include "device_base.h"
#include <string>
class Modbus_device:public Base_device
{
private:
    double temperature;
    double humidity;
    char *device_path;
    char *rd_cmd;
    bool is_fullone(char a);//此函数用于温度计算
    double func(int *a,int n);//用于温度计算
public:
    Modbus_device();
    Modbus_device(unsigned int id,char *path);
    ~Modbus_device();
    double get_temperature(char a,char b);
    double get_humidity(char a,char b);
    void set_rd_cmd();//此函数仅适用于第一个设备
    void show_temperature();
    void show_humidity();
    void run();
    //unsigned int get_deviceAddress();
    //void set_deviceAddress(unsigned int address);
};

#endif //YANXIANG_DEVICE_MODBUS_H
