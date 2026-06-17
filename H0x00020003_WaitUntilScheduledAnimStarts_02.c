
/* public: int __thiscall CMovableModelEntity::H0x00020003_WaitUntilScheduledAnimStarts_02(class
   CEntityEvent const &) */

int __thiscall
CMovableModelEntity::H0x00020003_WaitUntilScheduledAnimStarts_02
          (CMovableModelEntity *this,CEntityEvent *param_1)

{
  CEntityEvent *pCVar1;
  EInternal local_14 [8];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x1b4a00  2223
                       ?H0x00020003_WaitUntilScheduledAnimStarts_02@CMovableModelEntity@@QAEHABVCEntityEvent@@@Z
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621c139;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pCVar1 = (CEntityEvent *)EInternal::EInternal(local_14);
  local_4 = 0;
  CRationalEntity::Jump((CRationalEntity *)this,0x20003,0x20004,0,pCVar1);
  ExceptionList = local_c;
  return 1;
}

