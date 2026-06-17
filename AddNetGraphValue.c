
/* public: void __thiscall CNetworkLibrary::AddNetGraphValue(enum NetGraphEntryType,float) */

void __thiscall
CNetworkLibrary::AddNetGraphValue(CNetworkLibrary *this,NetGraphEntryType param_1,float param_2)

{
  CNetworkLibrary *pCVar1;
  void *_Src;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  
                    /* 0xf8c60  991  ?AddNetGraphValue@CNetworkLibrary@@QAEXW4NetGraphEntryType@@M@Z
                        */
  if (DAT_362a6084 < 0x14) {
    DAT_362a6084 = 0x14;
  }
  else if (1000 < DAT_362a6084) {
    DAT_362a6084 = 1000;
  }
  iVar4 = DAT_362a6084;
  pCVar1 = this + 0x1364;
  iVar2 = FUN_360fad50((undefined4 *)pCVar1);
  if (iVar2 != iVar4) {
    if (*(int *)pCVar1 != 0) {
      operator_delete__(*(void **)(this + 0x1368));
      *(int *)pCVar1 = 0;
      *(undefined4 *)(this + 0x1368) = 0;
      iVar4 = DAT_362a6084;
    }
    if (iVar4 != 0) {
      *(int *)pCVar1 = iVar4;
      uVar3 = thunk_FUN_361bf99c(iVar4 * 8 + 8);
      *(undefined4 *)(this + 0x1368) = uVar3;
    }
    iVar4 = FUN_360fad50((undefined4 *)pCVar1);
    puVar6 = *(undefined4 **)(this + 0x1368);
    for (uVar5 = (uint)(iVar4 << 3) >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined1 *)puVar6 = 0;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
  }
  _Src = *(void **)(this + 0x1368);
  iVar4 = FUN_360fad50((undefined4 *)pCVar1);
  memmove((void *)((int)_Src + 8),_Src,iVar4 * 8 - 8);
  **(NetGraphEntryType **)(this + 0x1368) = param_1;
  *(float *)(*(int *)(this + 0x1368) + 4) = param_2;
  return;
}

