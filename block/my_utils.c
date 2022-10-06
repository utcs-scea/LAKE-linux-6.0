
#include "my_util.h"

inline long my_get_duration_ns(const struct timespec t_start, const struct timespec t_end) {

	return (t_end.tv_sec-t_start.tv_sec) * (long)1e9 + (t_end.tv_nsec-t_start.tv_nsec);
}