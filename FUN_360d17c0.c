
undefined4 __thiscall FUN_360d17c0(void *this,CEntity *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  EPass local_2c [8];
  CEntity *local_24;
  undefined4 local_20;
  EPass local_1c [8];
  CEntity *local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36214a90;
  local_c = ExceptionList;
  uVar3 = 0;
  ExceptionList = &local_c;
  if ((*(uint *)(param_1 + 0xc) & *(uint *)((int)this + 0x18)) != 0) {
    ExceptionList = &local_c;
    EPass::EPass(local_2c);
    local_4 = 0;
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
    if ((local_24 != (CEntity *)0x0) &&
       (iVar1 = *(int *)(local_24 + 0x18), *(int *)(local_24 + 0x18) = iVar1 + -1, iVar1 + -1 == 0))
    {
      CEntity::DeleteSelf(local_24);
    }
    uVar3 = 1;
    local_24 = param_1;
    local_20 = 1;
    CEntity::SendEvent(*(CEntity **)((int)this + 4),(CEntityEvent *)local_2c,0);
    local_4 = 0xffffffff;
    EPass::~EPass(local_2c);
  }
  if ((*(uint *)(param_1 + 0xc) & *(uint *)((int)this + 0x1c)) != 0) {
    EPass::EPass(local_1c);
    iVar1 = *(int *)((int)this + 4);
    local_4 = 1;
    if (iVar1 != 0) {
      *(int *)(iVar1 + 0x18) = *(int *)(iVar1 + 0x18) + 1;
    }
    if ((local_14 != (CEntity *)0x0) &&
       (iVar2 = *(int *)(local_14 + 0x18), *(int *)(local_14 + 0x18) = iVar2 + -1, iVar2 + -1 == 0))
    {
      CEntity::DeleteSelf(local_14);
    }
    local_10 = 0;
    local_14 = (CEntity *)iVar1;
    CEntity::SendEvent(param_1,(CEntityEvent *)local_1c,0);
    local_4 = 0xffffffff;
    EPass::~EPass(local_1c);
    ExceptionList = local_c;
    return 1;
  }
  ExceptionList = local_c;
  return uVar3;
}

