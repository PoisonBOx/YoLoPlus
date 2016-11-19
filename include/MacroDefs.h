#ifndef __MACRODEFS_H__
#define __MACRODEFS_H__

#include "ConfigNodeDefs.h"
#include "ModelNodeDefs.h"
#include "DataTypeDefs.h"

#define SAFE_DELETE(p) if ( p ){ delete p; p = NULL; }
#define SAFE_DELETE_ARRAY(p) if ( p ) { delete []p; p = NULL; }

#endif // __MACRODEFS_H__
