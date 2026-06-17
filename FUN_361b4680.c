
CMovableEntity * FUN_361b4680(void)

{
  CMovableEntity *this;
  CMovableEntity *pCVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621c0fb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this = (CMovableEntity *)FUN_361bf99c(0x364);
  local_4 = 0;
  pCVar1 = (CMovableEntity *)0x0;
  if (this != (CMovableEntity *)0x0) {
    CMovableEntity::CMovableEntity(this);
    *(undefined ***)this = &CMovableModelEntity::_vftable_;
    pCVar1 = this;
  }
  ExceptionList = local_c;
  return pCVar1;
}

