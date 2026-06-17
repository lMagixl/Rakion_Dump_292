
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CServer::ReceiveAcknowledge(long,float) */

void __thiscall CServer::ReceiveAcknowledge(CServer *this,long param_1,float param_2)

{
  float fVar1;
  int iVar2;
  char *pcVar3;
  long lVar4;
  double dVar5;
  
                    /* 0x10a700  3057  ?ReceiveAcknowledge@CServer@@QAEXJM@Z */
  iVar2 = rand_();
  if (_DAT_362cceb0 < (float)iVar2 * _DAT_3623193c) {
    if (DAT_362cced0 != 0) {
      dVar5 = (double)param_2;
      lVar4 = param_1;
      pcVar3 = Translate(s_ETRSAcknowledge_client____d__tim_36237188,4);
      CPrintF(pcVar3,lVar4,dVar5);
    }
    fVar1 = *(float *)(*(int *)(this + 8) + 0x50 + param_1 * 0x60);
    if (fVar1 < param_2 - (float)_DAT_36237340) {
      FUN_361024a0(this + 0x3c,fVar1,param_2);
      if (DAT_362cced0 != 0) {
        dVar5 = (double)*(float *)(this + *(int *)(this + 0x1c7c) * 0xc + 0x58);
        pcVar3 = Translate(s_ETRSNew_first_tick_time___5_2f_362371b4,4);
        CPrintF(pcVar3,dVar5);
      }
      *(float *)(*(int *)(this + 8) + 0x50 + param_1 * 0x60) = param_2;
    }
  }
  return;
}

