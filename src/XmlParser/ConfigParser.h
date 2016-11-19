#ifndef __CONFIGPARSER_H__
#define __CONFIGPARSER_H__

#include <string>
#include "MacroDefs.h"

class CConfigParser
{
public:
	CConfigParser( const std::string& filename );
	~CConfigParser();

public:
	void Read();

public:
	void Append();

private:
	
};

#endif // __CONFIGPARSER_H__
