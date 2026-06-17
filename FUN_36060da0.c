
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_36060da0(void)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int unaff_EDI;
  
  CDrawPort::SetAsCurrent(DAT_362bf888);
  puVar1 = (uint *)CTimer::GetHighPrecisionTimer(_pTimer);
  DAT_362bf8a8 = *puVar1;
  DAT_362bf8ac = puVar1[1];
  _DAT_362bf8a0 = 1;
  (*DAT_362c4664)(0xbf000000,0x3f000000,0xbf000000,0x3f000000,0x3f000000,0x40000000);
  (*DAT_362c4674)(0);
  (*DAT_362c4654)(0x3d);
  CDrawPort::Fill(DAT_362bf888,0x7f7f7fff);
  CDrawPort::FillZBuffer(DAT_362bf888,1.0);
  if (DAT_362bf88c == 0) {
    (*DAT_362c462c)();
  }
  else {
    (*DAT_362c4600)();
    (*DAT_362c4648)(0x15,0x15);
  }
  if (DAT_362bf894 == 0) {
    (*DAT_362c4624)();
    (*DAT_362c461c)();
  }
  else {
    (*DAT_362c45f8)();
    (*DAT_362c45f0)();
  }
  (*DAT_362c4628)();
  uVar2 = FUN_36061f20(0x362bf8c4);
  (*DAT_362c4690)(DAT_362bf8c8,uVar2);
  (*DAT_362c46b8)();
  (*DAT_362c46a0)(DAT_362bf8e8);
  if (DAT_362bf898 == 0) {
    (*DAT_362c4634)();
  }
  else {
    (*DAT_362c4608)();
    (*DAT_362c469c)(DAT_362bf8d8,0);
    iVar4 = 2;
    if (1 < DAT_362bf898) {
      do {
        FUN_3607b900(iVar4 + -1);
        (*DAT_362c4608)();
        FUN_3607b9d0((undefined4 *)&DAT_362bf874,(int *)&DAT_362bf8b0);
        (*DAT_362c469c)(DAT_362bf8d8,0);
        iVar4 = iVar4 + 1;
      } while (iVar4 <= DAT_362bf898);
    }
    if (1 < DAT_362bf898) {
      FUN_3607b900(0);
    }
  }
  if (0 < unaff_EDI) {
    do {
      uVar2 = DAT_362bf8f8;
      uVar3 = FUN_36061f30(0x362bf8f4);
      (*DAT_362c46a4)(uVar3,uVar2);
      unaff_EDI = unaff_EDI + -1;
    } while (unaff_EDI != 0);
  }
  FUN_3607acb0();
  if (1 < DAT_362bf898) {
    iVar4 = 2;
    if (1 < DAT_362bf898) {
      do {
        FUN_3607b900(iVar4 + -1);
        (*DAT_362c4634)();
        iVar4 = iVar4 + 1;
      } while (iVar4 <= DAT_362bf898);
    }
    FUN_3607b900(0);
  }
  (*DAT_362c46b4)(1);
  CViewPort::SwapBuffers(DAT_362bf884,0);
  _DAT_362bf8a0 = 0;
  puVar1 = (uint *)CTimer::GetHighPrecisionTimer(_pTimer);
  return (float10)CONCAT44((puVar1[1] - DAT_362bf8ac) - (uint)(*puVar1 < DAT_362bf8a8),
                           *puVar1 - DAT_362bf8a8) / (float10)*(longlong *)_pTimer;
}

