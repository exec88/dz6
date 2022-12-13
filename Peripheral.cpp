#include "Peripheral.h"

Peripheral::Peripheral(int frequency) : _frequency(frequency)
{

}
void Peripheral::Show()
{
	cout << "�������" << _frequency << endl;
}

Videocard::Videocard(int frequency, int memory) : Peripheral(frequency), _memory(memory)
{}
void Videocard::Show()
{
	cout << "������� ��������� MHz = " << _frequency << "\n����� ����������� Gb = " << _memory << endl;
}

Processor::Processor(int frequency, int cache) : Peripheral(frequency), _cache(cache)
{}
void Processor::Show()
{
	cout << "�������� ������� ���������� MHz = " << _frequency << "\n��� ������� ������ L2 Mb = " << _cache << endl;
}