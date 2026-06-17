
/* public: void __thiscall CServer::InitServerNetProcess(void) */

void __thiscall CServer::InitServerNetProcess(CServer *this)

{
  char *pcVar1;
  double dVar2;
  
                    /* 0x10ce70  2321  ?InitServerNetProcess@CServer@@QAEXXZ */
  if (*(int *)(this + 0x553c) == 0) {
    *(undefined4 *)(this + 0x553c) = 1;
    (**(code **)(*(int *)(this + 0x3c) + 4))();
    StartNewTick(this,*(float *)(*(int *)(_pNetwork + 0x24) + 0x2c));
    if (DAT_362cced0 != 0) {
      dVar2 = (double)*(float *)(*(int *)(_pNetwork + 0x24) + 0x2c);
      pcVar1 = Translate(s_ETRSInitialize_time___5_2f_36237314,4);
      CPrintF(pcVar1,dVar2);
    }
    FUN_36100e60(this + 0x3c,*(float *)(*(int *)(_pNetwork + 0x24) + 0x2c),'\x01');
  }
  return;
}

