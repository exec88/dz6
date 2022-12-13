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
    cout << "����� ����������� ������ (RAM) Gb = "<<_ram <<"\n����� ������ ���������� SSD Tb = " << _hardmemory << endl;
}

Computer_pc::Computer_pc(int ram, int hardmemory, int vmemory) : Device(ram), _hardmemory(hardmemory), _vmemory(vmemory)
{
}

void Computer_pc::Show()
{
    cout << "����� ����������� ������ (RAM) Gb = " << _ram << "\n����� ������ ���������� HARD Tbb = "  <<_hardmemory << "\n����� ������ ���������� Gb = " << _vmemory << endl;
}