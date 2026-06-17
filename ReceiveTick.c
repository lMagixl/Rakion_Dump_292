
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CSessionState::ReceiveTick(float,unsigned char *,long) */

void __thiscall
CSessionState::ReceiveTick(CSessionState *this,float param_1,uchar *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  double dVar4;
  
                    /* 0x1100e0  3070  ?ReceiveTick@CSessionState@@QAEXMPAEJ@Z */
  iVar2 = rand_();
  bVar1 = _DAT_362ccec4 <= (float)iVar2 * _DAT_3623193c;
  if (param_1 <= *(float *)(this + 0x1d00)) {
    if ((bVar1) && (iVar2 = CNetworkLibrary::IsPlayingDemo(_pNetwork), iVar2 == 0)) {
      SendAcknowledge(this,param_1);
      return;
    }
  }
  else if (bVar1) {
    if (DAT_362cced4 != 0) {
      dVar4 = (double)param_1;
      pcVar3 = Translate(s_ETRSClient_reading_tick__time____36237994,4);
      CPrintF(pcVar3,dVar4);
    }
    FUN_361023e0(this + 0x90,param_1,param_2,param_3);
    iVar2 = CNetworkLibrary::IsPlayingDemo(_pNetwork);
    if (iVar2 == 0) {
      SendAcknowledge(this,param_1);
    }
  }
  return;
}

