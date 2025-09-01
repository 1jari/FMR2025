#include  "m_fx.h"
#include  "g_ang.h"
#include  "l_defs.h"
#include  "l_robo.h"

task main {

  /* Crie uma instancia do robo */
  obj_robo andrea;
  criar_robo(&andrea);

  /* +================+ */
  /* | Loop principal | */
  /* +================+ */
  while(andrea.b_exec) {

#ifdef    __LUNOVERSIS_DEBUG__
    debug_robo(&andrea);
#endif /* __LUNOVERSIS_DEBUG__ */

  }
}
