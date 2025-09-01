#ifndef     _LUNOVERSIS_L_ROBOT_H
#define     _LUNOVERSIS_L_ROBOT_H

#include    "g_ang.h"
#include    "l_defs.h"

#ifndef     __LUNOVERSIS__
#define     __LUNOVERSIS__
#endif  /*  __LUNOVERSIS__ */

#define     N_SENSORES  2
#define     S_LUZ_ESQ   S2
#define     S_LUZ_DIR   S3

obj
_lunoversis_obj_robo {
  /* +=====================+ */
  /* | Propriedade globais | */
  /* +=====================+ */
  ang_t   a_theta;      /* Angulo global do robo */
  bool    b_exec;       /* - "Isso ao menos esta executando?" */

  /* +================+ */
  /* | Vies de sensor | */
  /* +================+ */
  ubyte  __vies[N_SENSORES];

} obj_robo;

/* +=========+ */
/* | Metodos | */
/* +=========+ */

void
criar_robo( obj_robo *robo);

void
conf_robo(  ubyte     l_e,
            ubyte     l_d,
            obj_robo *robo);
void
debug_robo( obj_robo *robo);

/* +===============+ */
/* | Implementacao | */
/* +===============+ */
void
criar_robo( obj_robo *robo) {
  robo->a_theta   = 0x00000000;
  robo->b_exec    = true;
}

void
conf_robo(  ubyte     l_e,
            ubyte     l_d,
            obj_robo *robo) {

  /* +===================================+ */
  /* | Configuracao propria dos sensores | */
  /* +===================================+ */
  SensorType[S_LUZ_ESQ] = sensorLightActive;
  SensorType[S_LUZ_DIR] = sensorLightActive;

  /* +======================+ */
  /* | configuracao de vies | */
  /* +======================+ */
  robo->__vies[S_LUZ_ESQ - 1] = l_e;
  robo->__vies[S_LUZ_DIR - 1] = l_d;
}

void
debug_robo( obj_robo *robo) {
  nxtDisplayString(1, "Rodando!");
  nxtDisplayString(2, "Ang %d", robo->a_theta);
  nxtDisplayString(3, "Vies [eL%d]", robo->__vies[S_LUZ_ESQ]);
  nxtDisplayString(4, "E%d:D%d", nMotorEncoder[motorB], nMotorEncoder[motorC]);
}

#endif  /*  _LUNOVERSIS_L_ROBOT_H */
