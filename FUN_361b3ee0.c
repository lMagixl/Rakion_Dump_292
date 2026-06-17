
void __fastcall FUN_361b3ee0(undefined4 *param_1)

{
  CEntity *pCVar1;
  CEntity *this;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_3621bea8;
  local_c = ExceptionList;
  this = (CEntity *)*param_1;
  local_4 = 0;
  if (this != (CEntity *)0x0) {
    pCVar1 = this + 0x18;
    ExceptionList = &local_c;
    *(int *)pCVar1 = *(int *)pCVar1 + -1;
    if (*(int *)pCVar1 == 0) {
      CEntity::DeleteSelf(this);
    }
  }
  *param_1 = 0;
  ExceptionList = local_c;
  return;
}

