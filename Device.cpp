#include "Device.h"


Device::Device(int ram) : _ram(ram)
{
}

void Device::Show()
{
    cout << "Basic ram: " << _ram << endl;
}


Notebook::Notebook(int ram, int hardmemory) : Device(ram), _hardmemory(hardmemory)
{
}

void Notebook::Show()
{
    cout << "Объем оперативной памяти (RAM) Gb = "<<_ram <<"\nОбъем памяти накопителя SSD Tb = " << _hardmemory << endl;
}

Computer_pc::Computer_pc(int ram, int hardmemory, int vmemory) : Device(ram), _hardmemory(hardmemory), _vmemory(vmemory)
{
}

void Computer_pc::Show()
{
    cout << "Объем оперативной памяти (RAM) Gb = " << _ram << "\nОбъем памяти накопителя HARD Tbb = "  <<_hardmemory << "\nОбъем памяти видеокарты Gb = " << _vmemory << endl;
}