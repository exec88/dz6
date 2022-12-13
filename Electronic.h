#pragma once
#include <iostream>
using namespace std;


class Electronic
{
public:
	virtual void Show() = 0;
	virtual ~Electronic() = default;
};