
/* public: int __thiscall CMovableModelEntity::H0x00020002_WaitUntilScheduledAnimStarts_01(class
   CEntityEvent const &) */

int __thiscall
CMovableModelEntity::H0x00020002_WaitUntilScheduledAnimStarts_01
          (CMovableModelEntity *this,CEntityEvent *param_1)

{
  CEntityEvent *pCVar1;
  EInternal local_14 [8];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x1b4980  2222
                       ?H0x00020002_WaitUntilScheduledAnimStarts_01@CMovableModelEntity@@QAEHABVCEntityEvent@@@Z
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621c127;
  local_c = ExceptionList;
  if (*(int *)(param_1 + 4) != 0x50003) {
    if (*(int *)(param_1 + 4) != 0x50004) {
      return 0;
    }
    ExceptionList = &local_c;
    pCVar1 = (CEntityEvent *)EInternal::EInternal(local_14);
    local_4 = 0;
    CRationalEntity::Jump((CRationalEntity *)this,0x20002,0x20003,0,pCVar1);
  }
  ExceptionList = local_c;
  return 1;
}

