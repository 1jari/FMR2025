#ifndef     _LUNOVERSIS_L_ROBOT_H
#define     _LUNOVERSIS_L_ROBOT_H

#ifndef     __LUNOVERSIS__
#define     __LUNOVERSIS__
#endif  /*  __LUNOVERSIS__ */

#include    "g_ang.h"
#include    "l_defs.h"

/* +========+ */
/* | Objeto | */
/* +========+ */
obj
_lunoversis_obj_robo {
  ang_t   a_theta;    /* Angulo global do robo */
  bool    b_exec;     /* - "Isso ao menos esta executando?" */
} obj_robo;

/* +============+ */
/* | Construtor | */
/* +============+ */
void
criar_robo( obj_robo *robo) {
  robo->a_theta   = 0x00000000;
  robo->b_exec    = true;
}

void
debug_robo( obj_robo *robo) {
  nxtDisplayString(1, "Rodando!");
  nxtDisplayString(2, "Ang -> %d", robo->a_theta);
}

#endif  /*  _LUNOVERSIS_L_ROBOT_H */
