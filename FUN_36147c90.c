
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_36147c90(void *this,int param_1,byte *param_2,byte param_3)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = FUN_36147750(this,param_1,(uint)(param_2 == (byte *)0x0));
  if (iVar2 != 0) {
    if (((DAT_362fdb08 & 4) == 0) || ((_DAT_362fdb04 & 0x100000) != 0)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (param_2 == (byte *)0x0) {
      if ((*(int *)((int)this + 8) == 0) && (bVar1)) {
        FUN_36146af0((int)this);
        return;
      }
      FUN_36146880((int)this);
      return;
    }
    if (bVar1) {
      FUN_36146c60(this,param_2,param_3);
      return;
    }
    FUN_361469b0(this,param_2,param_3);
  }
  return;
}

