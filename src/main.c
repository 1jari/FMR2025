#include  "m_fx.h"
#include  "g_ang.h"
#include  "l_defs.h"
#include  "l_robo.h"

#define   __LUNOVERSIS_DEBUG__

/* Nosso Robo */
obj_robo andrea;

task main {

  /* Crie uma instancia do robo */
  criar_robo(&andrea);
  conf_robo( 32, 32, &andrea);

  /* +================+ */
  /* | Loop principal | */
  /* +================+ */
  while(andrea.b_exec) {

#ifdef    __LUNOVERSIS_DEBUG__
    debug_robo(&andrea);
#endif /* __LUNOVERSIS_DEBUG__ */

  }
}
