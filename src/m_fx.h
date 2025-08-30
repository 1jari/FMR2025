#ifndef     _LUNOVERSIS_M_FX_H
#define     _LUNOVERSIS_M_FX_H

#ifndef     __LUNOVERSIS__
#define     __LUNOVERSIS__
#endif  /*  __LUNOVERSIS__ */

#include    "m_util.h"

/* +=====================================+ */
/* | Aritmetica de ponto fixo, DW -> W.W | */
/* +=====================================+ */
#define     FRAC_BITS 16

typedef long  fx_t;   /* Apenas para claridade. */

/* Conversores */
#define   INT_FX(x)   ((fx_t) (x) <<  FRAC_BITS)
#define   FX_INT(x)   ((int)( (x) >>  FRAC_BITS))
#define   FL_FX( x)   ((fx_t) ((x) *  (1   << FRAC_BITS)))
#define   FX_FL( x)   ((float)((x) *  (1   >> FRAC_BITS)))

/* Aritmetica */
fx_t
FX_MUL( fx_t  a,
        fx_t  b)
{ return ((a * b) >> FRAC_BITS); }

fx_t
FX_DIV( fx_t  a,
        fx_t  b)
{
  if((abs(a) >> 14) >= abs(b))
  {
    return  (a^b) < 0 ? DWORD_MAX : 0;
  }
  else
  {
    return (a << FRAC_BITS) / b;
  }
}
#endif  /*  _LUNOVERSIS_M_FX_H */
