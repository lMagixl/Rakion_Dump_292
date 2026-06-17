
/* public: void __thiscall CNetworkLibrary::AddBandwidthGraphValue(unsigned long) */

void __thiscall CNetworkLibrary::AddBandwidthGraphValue(CNetworkLibrary *this,ulong param_1)

{
  CNetworkLibrary *pCVar1;
  void *_Src;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  
                    /* 0xf8d40  957  ?AddBandwidthGraphValue@CNetworkLibrary@@QAEXK@Z */
  if (DAT_362a6084 < 0x14) {
    DAT_362a6084 = 0x14;
  }
  else if (1000 < DAT_362a6084) {
    DAT_362a6084 = 1000;
  }
  iVar5 = DAT_362a6084;
  pCVar1 = this + 0x136c;
  iVar2 = FUN_360637d0((undefined4 *)pCVar1);
  if (iVar2 != iVar5) {
    if (*(int *)pCVar1 != 0) {
      operator_delete__(*(void **)(this + 0x1370));
      *(int *)pCVar1 = 0;
      *(undefined4 *)(this + 0x1370) = 0;
      iVar5 = DAT_362a6084;
    }
    if (iVar5 != 0) {
      *(int *)pCVar1 = iVar5;
      uVar3 = thunk_FUN_361bf99c(iVar5 * 4 + 4);
      *(undefined4 *)(this + 0x1370) = uVar3;
    }
    uVar4 = FUN_360637d0((undefined4 *)pCVar1);
    puVar6 = *(undefined4 **)(this + 0x1370);
    for (uVar4 = uVar4 & 0x3fffffff; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(undefined1 *)puVar6 = 0;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
  }
  _Src = *(void **)(this + 0x1370);
  iVar5 = FUN_360637d0((undefined4 *)pCVar1);
  memmove((void *)((int)_Src + 4),_Src,iVar5 * 4 - 4);
  **(ulong **)(this + 0x1370) = param_1;
  return;
}

