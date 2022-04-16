#include "ParityAndCRC.h"

#include <random>
#include <sstream>
#include <iostream>

std::string Test::GenerateData()
{
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<uint32_t> length(5, 25);
	std::uniform_int_distribution<uint32_t> data(0, 1);

	std::stringstream ss;

	for (auto i = 0; i < length(gen); i++)
	{
		ss << ((data(gen) == 1) ? '1' : '0');
	}
	return ss.str();
}
bool Parity::Even(const std::string& data, bool debug)
{
	if (debug) std::cout << "doin...";
	return true;
}
bool Parity::Odd(const std::string& data, bool debug)
{
	if (debug) std::cout << "doin...";
	return true;
}
bool Parity2::Even(const std::string& data, bool debug)
{
	if (debug) std::cout << "doin...";
	return true;
}
bool Parity2::Odd(const std::string& data, bool debug)
{
	if (debug) std::cout << "doin...";
	return true;
}
bool CRC::Check(const std::string& data, bool debug)
{
	if (debug) std::cout << "doin...";
	return true;
}