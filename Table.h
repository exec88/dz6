#pragma once
#include "Device.h"
#include"Peripheral.h"

//�������
class Table final : public Device, Peripheral
{
public:
	Table(int ram, int frequency);

	
	void Show() override;
};