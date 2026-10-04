#pragma once
class Permissions
{
private:
	unsigned int mask;
public:
	static const unsigned int None = 0;
	static const unsigned int Read = 1 << 0;
	static const unsigned int Write = 1 << 1;
	static const unsigned int Exec = 1 << 2;

	Permissions(unsigned int mask = None) : mask(mask) {};

	friend Permissions operator|(const Permissions& p1, const Permissions& p2);

	friend Permissions operator&(const Permissions& p1, const Permissions& p2);

	bool operator!() const;

	void print() const;
};

