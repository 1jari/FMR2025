#ifndef     _LUNOVERSIS_M_UTIL_H
#define     _LUNOVERSIS_M_UTIL_H

#ifndef     __LUNOVERSIS__
#define     __LUNOVERSIS__
#endif  /*  __LUNOVERSIS__ */

/* +===========+ */
/* | Tamanhos. | */
/* +===========+ */
#ifndef     CHAR_MAX
#define     CHAR_MAX  0xff
#endif  /*  CHAR_MAX */

#ifndef     WORD_MAX
#define     WORD_MAX  0xffff
#endif  /*  WORD_MAX */

#ifndef     DWORD_MAX
#define     DWORD_MAX 0xffffffff
#endif  /*  DWORD_MAX */

/* ======================================== */
/* | Definicoes de constantes matematicas | */
/* ======================================== */
#ifndef     __LUNOVERSIS_NAO_INVENTA_MODA__

#ifndef     M_PI
#define     M_PI      3.14159265  /*  DOOM's Pi */
#endif  /*  M_PI */
#else
#define     M_PI      PI

#endif  /*  __LUNOVERSIS_NAO_INVENTA_MODA__ */

#endif  /*  _LUNOVERSIS_M_UTIL_H */
