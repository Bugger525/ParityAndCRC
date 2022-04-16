#include <string>

class Test
{
public:
	static std::string GenerateData();
private:
	Test();
};
class Parity
{
public:
	static bool Even(const std::string& data, bool debug);
	static bool Odd(const std::string& data, bool debug);
};
class Parity2
{
public:
	static bool Even(const std::string& data, bool debug);
	static bool Odd(const std::string& data, bool debug);
};
class CRC
{
public:
	static bool Check(const std::string& data, bool debug);
};