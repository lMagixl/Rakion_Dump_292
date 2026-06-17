
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_360609f0(void)

{
  uint *puVar1;
  int unaff_EBX;
  int iVar2;
  undefined1 local_78 [4];
  undefined1 local_74 [4];
  undefined1 local_70 [4];
  undefined1 local_6c [4];
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  float local_38;
  undefined4 local_34;
  float local_30;
  float local_2c;
  undefined4 local_28;
  float local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined2 local_10;
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_a;
  undefined2 local_8;
  undefined2 local_6;
  undefined4 local_4;
  
  local_4 = DAT_362abd90;
  CDrawPort::SetAsCurrent(DAT_362bf888);
  CDrawPort::Fill(DAT_362bf888,0x7f7f7fff);
  CDrawPort::FillZBuffer(DAT_362bf888,1.0);
  puVar1 = (uint *)CTimer::GetHighPrecisionTimer(_pTimer);
  local_38 = (float)DAT_362bf87c;
  DAT_362bf8a8 = *puVar1;
  DAT_362bf8ac = puVar1[1];
  local_30 = (float)DAT_362bf880;
  _DAT_362bf8a0 = 1;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0x3f000000;
  local_3c = 0;
  local_34 = 0x3f000000;
  local_28 = 0x3f000000;
  local_20 = 0;
  local_1c = 0x3f000000;
  local_68 = 0;
  local_64 = 0;
  local_60 = 0;
  local_5c = 0x3f800000;
  local_58 = 0x3f800000;
  local_54 = 0x3f800000;
  local_50 = 0x3f800000;
  local_4c = 0;
  local_2c = local_38;
  local_24 = local_30;
  FUN_360605c0(local_78,0xff0000ff);
  FUN_360605c0(local_74,0xff00ff00);
  FUN_360605c0(local_70,0xffff0000);
  FUN_360605c0(local_6c,0xffff00ff);
  local_10 = 0;
  local_e = 1;
  local_c = 2;
  local_a = 0;
  local_8 = 2;
  local_6 = 3;
  (*DAT_362c4690)(&local_48,4);
  (*DAT_362c46a0)(local_78);
  if (DAT_362bf898 == 0) {
    (*DAT_362c4634)();
  }
  else {
    (*DAT_362c4608)();
    (*DAT_362c469c)(DAT_362bf8d8,0);
    iVar2 = 2;
    if (1 < DAT_362bf898) {
      do {
        FUN_3607b900(iVar2 + -1);
        (*DAT_362c4608)();
        FUN_3607b9d0((undefined4 *)&DAT_362bf874,(int *)&DAT_362bf8b0);
        (*DAT_362c469c)(&local_68,0);
        iVar2 = iVar2 + 1;
      } while (iVar2 <= DAT_362bf898);
    }
    if (1 < DAT_362bf898) {
      FUN_3607b900(0);
    }
  }
  if (DAT_362bf88c == 0) {
    (*DAT_362c462c)();
  }
  else {
    (*DAT_362c4600)();
    if (DAT_362bf898 == 0) {
      (*DAT_362c4648)(0x15,0x15);
    }
    else {
      (*DAT_362c4648)(0x1b,0x1c);
    }
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
  if (0 < unaff_EBX) {
    do {
      (*DAT_362c46a4)(6,&local_10);
      unaff_EBX = unaff_EBX + -1;
    } while (unaff_EBX != 0);
  }
  if (1 < DAT_362bf898) {
    iVar2 = 2;
    if (1 < DAT_362bf898) {
      do {
        FUN_3607b900(iVar2 + -1);
        (*DAT_362c4634)();
        iVar2 = iVar2 + 1;
      } while (iVar2 <= DAT_362bf898);
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

