#include "Table.h"

Table::Table(int ram, int frequency) : Device(ram), Peripheral(frequency)
{

}
void Table::Show()
{
	cout << "Объем оперативной памяти (RAM) Gb = " << _ram << "\nТактовая частота процессора MHz =  " << _frequency << endl;
}

