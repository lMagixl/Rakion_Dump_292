
/* public: void __thiscall CEntity::SetSkaModel_t(class CTString const &) */

void __thiscall CEntity::SetSkaModel_t(CEntity *this,CTString *param_1)

{
  CModelInstance *pCVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x12ce40  3593  ?SetSkaModel_t@CEntity@@QAEXABVCTString@@@Z */
  puStack_c = &LAB_36218b83;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  if (*(int *)(this + 0x7c) == 0) {
    ExceptionList = &local_10;
    StringDuplicate(&DAT_36237c7b);
    pCVar1 = CreateModelInstance();
    *(CModelInstance **)(this + 0x7c) = pCVar1;
  }
  ObtainModelInstance_t(*(CModelInstance **)(this + 0x7c),param_1);
  local_8 = 0xffffffff;
  SetSkaColisionInfo(this);
  ExceptionList = local_10;
  return;
}

