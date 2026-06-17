
undefined4 FUN_361b3d40(void)

{
  CMovableEntity *this;
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621c0bb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this = (CMovableEntity *)FUN_361bf99c(0x35c);
  local_4 = 0;
  if (this != (CMovableEntity *)0x0) {
    uVar1 = CMovableEntity::CMovableEntity(this);
    ExceptionList = local_c;
    return uVar1;
  }
  ExceptionList = local_c;
  return 0;
}

