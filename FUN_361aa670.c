
CMovableEntity * FUN_361aa670(void)

{
  CMovableEntity *this;
  CMovableEntity *pCVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621be8b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this = (CMovableEntity *)FUN_361bf99c(0x35c);
  local_4 = 0;
  pCVar1 = (CMovableEntity *)0x0;
  if (this != (CMovableEntity *)0x0) {
    CMovableEntity::CMovableEntity(this);
    *(undefined ***)this = &CMovableBrushEntity::_vftable_;
    pCVar1 = this;
  }
  ExceptionList = local_c;
  return pCVar1;
}

