#pragma once
#include"Electronic.h"

class Peripheral : virtual public Electronic
{
public:
	Peripheral(int frequency);
	void Show() override;

protected:
	int _frequency;
};

class Videocard final : public Peripheral
{
public:
	Videocard(int frequency, int memory);
	void Show() override;

private:
	int _memory;
};

class Processor final : public Peripheral
{
public:
	Processor(int frequency, int cache);
	void Show() override;

private:
	int _cache;
};