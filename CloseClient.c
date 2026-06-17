
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CServer::CloseClient(long) */

void __thiscall CServer::CloseClient(CServer *this,long param_1)

{
  int iVar1;
  int extraout_ECX;
  int iVar2;
  
                    /* 0x10a7e0  1341  ?CloseClient@CServer@@QAEXJ@Z */
  iVar2 = param_1 * 0x60;
  iVar1 = FUN_36109550((undefined4 *)(*(int *)(this + 8) + iVar2));
  if (iVar1 != 0) {
    iVar1 = *(int *)(this + 0x1c80) + -1;
    if (iVar1 < 0) {
      iVar1 = *(int *)(this + 0x1c80) + 599;
    }
    param_1 = *(long *)(extraout_ECX + 0x50);
    if ((float)param_1 < _DAT_36227d20 != ((float)param_1 == _DAT_36227d20)) {
      param_1 = *(long *)(this + *(int *)(this + 0x1c7c) * 0xc + 0x58);
    }
    FUN_361024a0(this + 0x3c,(float)param_1,*(float *)(this + iVar1 * 0xc + 0x58));
    *(undefined4 *)(*(int *)(this + 8) + 0x50 + iVar2) = 0xc0000000;
  }
  return;
}

