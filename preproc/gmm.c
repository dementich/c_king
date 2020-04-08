typedef unsigned long ulong

#define GENERIC_MAX(type) \
type type##_max(type x, type y) \
{ \
	return x > y ? x : y; \
}

GENERIC_MAX(ulong)