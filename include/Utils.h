/**
 * \file Utils.h
 * \author Orion Serup (orionserup@gmail.com)
 * \brief 
 * \version 0.1
 * \date 2022-02-14
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <assert.h>

#define Assert(cond, msg) assert(cond || !printf(msg))