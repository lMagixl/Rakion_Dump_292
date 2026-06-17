
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: int __thiscall CGfxLibrary::LockDrawPort(class CDrawPort *) */

int __thiscall CGfxLibrary::LockDrawPort(CGfxLibrary *this,CDrawPort *param_1)

{
  int iVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  undefined4 local_8;
  undefined4 local_4;
  
                    /* 0x857f0  2568  ?LockDrawPort@CGfxLibrary@@QAEHPAVCDrawPort@@@Z */
  uVar2 = CDrawPort::GetID(param_1);
  if ((DAT_362c4d84 == uVar2) && (DAT_362a40dc != 0)) {
    CDrawPort::SetOrtho(param_1);
    return 1;
  }
  if (*(int *)(this + 0xa38) == 0) {
    iVar1 = *(int *)(param_1 + 0x18);
    iVar4 = *(int *)(*(int *)param_1 + 0x68) - *(int *)(param_1 + 0x24);
    iVar3 = (*(int *)(*(int *)param_1 + 0x68) - *(int *)(param_1 + 0x1c)) - iVar4;
    (*DAT_362c3e14)(iVar1,iVar4,*(int *)(param_1 + 0x20) - iVar1,iVar3);
    (*DAT_362c3d90)(iVar1,iVar4,local_c,iVar3);
  }
  else if (*(int *)(this + 0xa38) == 1) {
    local_18 = *(int *)(param_1 + 0x18);
    local_14 = *(int *)(param_1 + 0x1c);
    local_10 = *(int *)(param_1 + 0x20) - local_18;
    local_c = *(int *)(param_1 + 0x24) - local_14;
    local_8 = 0;
    local_4 = 0x3f800000;
    if ((*(int *)(param_1 + 0x20) <= local_18) || (*(int *)(param_1 + 0x24) <= local_14)) {
      local_18 = 0;
      local_14 = 0;
      local_10 = 1;
      local_c = 1;
    }
    (**(code **)(**(int **)(this + 0xa5c) + 0xa0))(*(int **)(this + 0xa5c),&local_18);
    _DAT_362c44d8 = 0;
    _DAT_362c44dc = 0x3f800000;
  }
  DAT_362c4d84 = uVar2;
  CDrawPort::SetOrtho(param_1);
  return 1;
}

