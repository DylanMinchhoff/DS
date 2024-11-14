#ifndef COMPAREFUNCTIONS
#define COMPAREFUNCTIONS


// these currently do not work
// #define CAST_PTR(type, a) (type*)(a)
//#define COMPARE_TYPE(type, a, b) CAST_PTR( ##type, ##a) == CAST_PTR(##type, ##b) ? 0 : (CAST_PTR(##type, ##a) > CAST_PTR(##type, ##b)) ? 1 : -1

/**
 * @param a item compared
 * @param b item compared to a
 * will return 1,0,-1
 * @return 1   (a > b)
 * @return 0   (a = b)
 * @return -1  (a < b)
 */
int defaultCompareFunction(void* a, void* b);

#endif