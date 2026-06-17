
/* public: void __thiscall CEntity::SetSkaColisionInfo(void) */

void __thiscall CEntity::SetSkaColisionInfo(CEntity *this)

{
  int iVar1;
  char *local_20;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x12cd30  3590  ?SetSkaColisionInfo@CEntity@@QAEXXZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36218b79;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_36035f90((undefined4 *)(*(int *)(this + 0x7c) + 0x1c));
  if (iVar1 == 0) {
    StringDuplicate(s_Default_36237c40);
    CModelInstance::AddColisionBox(*(CModelInstance **)(this + 0x7c));
    CModelInstance::GetName(*(CModelInstance **)(this + 0x7c));
    local_4 = 0;
    CPrintF(s_Warning__Model_instance___s__has_36237c48);
    local_4 = 0xffffffff;
    StringFree(local_20);
  }
  UpdateSpatialRange(this);
  FindCollisionInfo(this);
  ExceptionList = local_c;
  return;
}

