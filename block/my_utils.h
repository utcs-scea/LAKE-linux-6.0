
#ifndef __LINUX_MY_UTILS_H
#define __LINUX_MY_UTILS_H

#include <linux/time.h>

// #define my_get_duration_ns(_ts_start, _ts_end)
//		(((_ts_end).tv_sec-(_ts_start).tv_sec) * (long)1e9 + ((_ts_end).tv_nsec-(_ts_start).tv_nsec))

long my_get_duration_ns(const struct timespec t_start, const struct timespec t_end);

#endif /* __LINUX_MY_UTILS_H */