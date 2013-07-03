// Generic platform configuration file

#ifndef __PLATFORM_GENERIC_H__
#define __PLATFORM_GENERIC_H__

#define PLATFORM_HAS_SYSTIMER

#if VTMR_NUM_TIMERS > 0
#undef NUM_TIMER
#define NUM_TIMER             2
#endif

#endif // #ifndef __PLATFORM_GENERIC_H__

