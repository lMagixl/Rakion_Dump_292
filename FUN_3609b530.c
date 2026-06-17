
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_3609b530(int *param_1)

{
  int *this;
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_36212df8;
  pvStack_c = ExceptionList;
  iVar4 = 0;
  ExceptionList = &pvStack_c;
  if (DAT_362c9db8 == 0) {
    uVar3 = 0;
    ExceptionList = &pvStack_c;
    do {
      (&DAT_362c9c88)[uVar3] = (char)((ulonglong)uVar3 % 3) + -1;
      uVar3 = uVar3 + 1;
    } while ((int)uVar3 < 0x100);
    DAT_362c9db8 = 1;
  }
  DAT_362c9c80 = *param_1;
  DAT_362c9c70 = *(int *)(DAT_362c9c80 + 0x6c);
  _DAT_362c9c6c = *(int *)(DAT_362c9c80 + 0x70);
  DAT_362c9c5c = *(undefined4 *)(DAT_362c9c80 + 0x68);
  DAT_362c9c68 = _DAT_362c9c6c * DAT_362c9c70 + -1;
  this = param_1 + 3;
  local_4 = 0;
  DAT_362c9c60 = DAT_362c9c5c;
  iVar1 = FUN_36097930((int)this);
  if (0 < iVar1) {
    do {
      piVar2 = (int *)FUN_36097920(this,iVar4);
      FUN_36097d90(piVar2);
      iVar4 = iVar4 + 1;
      iVar1 = FUN_36097930((int)this);
    } while (iVar4 < iVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(&DAT_362a50a0 + param_1[1] * 0x14))();
  CUpdateable::MarkUpdated((CUpdateable *)(param_1 + 2));
  ExceptionList = pvStack_c;
  return;
}

