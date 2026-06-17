
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_360b3990(void *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_8;
  int local_4;
  
  iVar1 = (int)this + 0x28;
  iVar2 = FUN_360b0fc0(iVar1);
  if (iVar2 < param_1) {
    return 0;
  }
  iVar2 = 0;
  if (0 < param_1) {
    do {
      iVar3 = FUN_360b2cb0((int)this);
      DAT_362ca420 = 1;
      if (iVar3 == 0) {
LAB_360b3a16:
        DAT_362ca420 = 0;
      }
      else {
        iVar4 = FUN_360b0fc0(iVar1);
        if (((float)iVar3 / (float)iVar4) * _DAT_36226670 <= (float)(100 - param_2))
        goto LAB_360b3a16;
      }
      FUN_360b34c0(this,&local_4,&local_8);
      FUN_360b37f0(this,local_4,local_8);
      FUN_360b3630((int)this);
      iVar3 = FUN_360b0fc0(iVar1);
      if (iVar3 == 0) {
        return 0;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_1);
  }
  return 1;
}

