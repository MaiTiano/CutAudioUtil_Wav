// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

#include "targetver.h"

#include <stdio.h>
#include <tchar.h>

#include <iostream>
#include <algorithm>
#include <fstream>

#ifndef UNICODE  
typedef ::std::string String;
#else
typedef ::std::wstring String;
#endif
// TODO: reference additional headers your program requires here
