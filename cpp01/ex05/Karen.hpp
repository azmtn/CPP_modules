#ifndef KAREN_HPP
#define KAREN_HPP

#include <iostream>

class Karen
{
private:
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
	void (Karen::*ptr[4]) (void) ;
public:
	Karen();
	~Karen();
	void complain(const std::string & level) ;
};

#endif