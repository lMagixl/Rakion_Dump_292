
/* public: void __thiscall CSessionState::SendAcknowledge(float) */

void __thiscall CSessionState::SendAcknowledge(CSessionState *this,float param_1)

{
  char *pcVar1;
  double dVar2;
  
                    /* 0x10eba0  3228  ?SendAcknowledge@CSessionState@@QAEXM@Z */
  if (DAT_362cced4 != 0) {
    dVar2 = (double)param_1;
    pcVar1 = Translate(s_ETRSSend_acknowledge___5_2f_362379bc,4);
    CPrintF(pcVar1,dVar2);
  }
  return;
}

