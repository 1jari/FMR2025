#ifndef     _LUNOVERSIS_G_ANG_H
#define     _LUNOVERSIS_G_ANG_H

#ifndef     __LUNOVERSIS__
#define     __LUNOVERSIS__
#endif  /*  __LUNOVERSIS__ */

#include    "m_util.h"
#include    "m_fx.h"

/* Medicao binaria de angulo. */

/* +================+ */
/* | Angulos Comuns | */
/* +================+ */
#define     ANG_360       (DWORD_MAX)
#define     ANG_90        (ANG_360 / 4)
#define     ANG_180       (ANG_360 / 2)
#define     ANG_270       (ANG_180 + ANG_90)

typedef long  ang_t;      /* Apenas para claridade. */

ang_t
conv_enc_ang( char enc) {
  return ((enc + 100)/200) * 360;
}

#endif  /*  _LUNOVERSIS_G_ANGLE_H */
