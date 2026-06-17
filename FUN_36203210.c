
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_36203210(undefined4 *param_1)

{
  bool bVar1;
  void *this;
  int *piVar2;
  int iVar3;
  float10 fVar4;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_3621cffb;
  local_14 = ExceptionList;
  iVar3 = 1;
  ExceptionList = &local_14;
  do {
    this = (void *)FUN_361bf99c(8);
    local_c = 0;
    if (this == (void *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = FUN_36208c70(this,(1 << ((char)iVar3 - 1U & 0x1f)) * 10);
    }
    local_c = 0xffffffff;
    fVar4 = (float10)_CIpow();
    FUN_36202320(piVar2,SUB84((double)_DAT_3624cf60,0),
                 (int)((ulonglong)(double)_DAT_3624cf60 >> 0x20),(double)fVar4);
    *param_1 = piVar2;
    param_1 = param_1 + 1;
    bVar1 = iVar3 < 0xc;
    iVar3 = iVar3 + 1;
  } while (bVar1);
  ExceptionList = local_14;
  return;
}

