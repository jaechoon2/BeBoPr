#ifndef	_HOME_H
#define _HOME_H

#include "bebopr.h"

extern void home_axis_to_min_limit_switch( axis_e axis, int32_t* position, uint32_t feed);
extern void home_axis_to_max_limit_switch( axis_e axis, int32_t* position, uint32_t feed);

#endif	/* _HOME_H */
