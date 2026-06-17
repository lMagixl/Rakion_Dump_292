
/* public: void __thiscall CModelInstance::SetCurrentColisionBoxIndex(long) */

void __thiscall CModelInstance::SetCurrentColisionBoxIndex(CModelInstance *this,long param_1)

{
  int iVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x15c900  3422  ?SetCurrentColisionBoxIndex@CModelInstance@@QAEXJ@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621a13a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_36035f90((undefined4 *)(this + 0x1c));
  if ((param_1 < iVar1) && (-1 < param_1)) {
    *(long *)(this + 0xec) = param_1;
    ExceptionList = local_c;
    return;
  }
  puVar2 = (undefined4 *)GetName(this);
  local_4 = 0;
  CPrintF(s_Model___s___invalid_colision_box_3623cbdc,*puVar2,param_1);
  local_4 = 0xffffffff;
  StringFree((char *)param_1);
  *(undefined4 *)(this + 0xec) = 0;
  ExceptionList = local_c;
  return;
}

