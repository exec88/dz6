#include "Table.h"

Table::Table(int ram, int frequency) : Device(ram), Peripheral(frequency)
{

}
void Table::Show()
{
	cout << "����� ����������� ������ (RAM) Gb = " << _ram << "\n�������� ������� ���������� MHz =  " << _frequency << endl;
}

