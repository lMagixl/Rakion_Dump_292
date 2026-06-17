
/* public: virtual __thiscall ETouch::~ETouch(void) */

void __thiscall ETouch::~ETouch(ETouch *this)

{
  CEntity *pCVar1;
  CEntity *this_00;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x12060  524  ??1ETouch@@UAE@XZ */
  puStack_8 = &LAB_3620dd28;
  local_c = ExceptionList;
  this_00 = *(CEntity **)(this + 8);
  local_4 = 0;
  if (this_00 != (CEntity *)0x0) {
    pCVar1 = this_00 + 0x18;
    ExceptionList = &local_c;
    *(int *)pCVar1 = *(int *)pCVar1 + -1;
    if (*(int *)pCVar1 == 0) {
      CEntity::DeleteSelf(this_00);
    }
  }
  *(undefined ***)this = &CEntityEvent::_vftable_;
  ExceptionList = local_c;
  return;
}

