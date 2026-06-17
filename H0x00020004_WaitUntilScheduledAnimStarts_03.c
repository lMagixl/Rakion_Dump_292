
/* public: int __thiscall CMovableModelEntity::H0x00020004_WaitUntilScheduledAnimStarts_03(class
   CEntityEvent const &) */

int __thiscall
CMovableModelEntity::H0x00020004_WaitUntilScheduledAnimStarts_03
          (CMovableModelEntity *this,CEntityEvent *param_1)

{
  CEntityEvent *pCVar1;
  EReturn local_14 [8];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x1b4a60  2224
                       ?H0x00020004_WaitUntilScheduledAnimStarts_03@CMovableModelEntity@@QAEHABVCEntityEvent@@@Z
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621c14b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pCVar1 = (CEntityEvent *)EReturn::EReturn(local_14);
  local_4 = 0;
  CRationalEntity::Return((CRationalEntity *)this,0x20004,pCVar1);
  ExceptionList = local_c;
  return 1;
}

