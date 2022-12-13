#pragma once
#include "Electronic.h"

class Device : virtual public Electronic //множественное наследование
{
public:
    Device(int ram);

    void Show() override;
protected:
    int _ram;
};

class Notebook final : public Device
{
public:
    Notebook(int ram, int hardmemory);
    void Show() override;
private:
    int _hardmemory;
};

class Computer_pc final : public Device
{
public:
    Computer_pc(int ram, int hardmemory, int vmemory);

    void Show() override;
private:
    int _hardmemory, _vmemory;
};