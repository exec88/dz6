#include "Peripheral.h"

Peripheral::Peripheral(int frequency) : _frequency(frequency)
{

}
void Peripheral::Show()
{
	cout << "Частота" << _frequency << endl;
}

Videocard::Videocard(int frequency, int memory) : Peripheral(frequency), _memory(memory)
{}
void Videocard::Show()
{
	cout << "Частота видеочипа MHz = " << _frequency << "\nОбъем видеопамяти Gb = " << _memory << endl;
}

Processor::Processor(int frequency, int cache) : Peripheral(frequency), _cache(cache)
{}
void Processor::Show()
{
	cout << "Тактовая частота процессора MHz = " << _frequency << "\nКЭШ второго уровня L2 Mb = " << _cache << endl;
}