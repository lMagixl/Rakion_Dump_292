
/* public: void __thiscall CEntity::SendEventInRange(class CEntityEvent const &,class
   AABBox<float,3> const &) */

void __thiscall
CEntity::SendEventInRange(CEntity *this,CEntityEvent *param_1,AABBox<float,3> *param_2)

{
  int iVar1;
  CEntity *this_00;
  int iVar2;
  CEntityEvent *pCVar3;
  CDynamicContainer<class_CEntity> local_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x12dbb0  3279
                       ?SendEventInRange@CEntity@@QAEXABVCEntityEvent@@ABV?$AABBox@M$02@@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36218be3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_360ccb50((undefined4 *)local_1c);
  local_4 = 0;
  FindEntitiesInRange(this,param_2,local_1c,0);
  iVar2 = 0;
  local_4 = CONCAT31(local_4._1_3_,1);
  iVar1 = FUN_360caf20((int)local_1c);
  if (0 < iVar1) {
    do {
      iVar1 = 0;
      pCVar3 = param_1;
      this_00 = (CEntity *)FUN_360cafb0(local_1c,iVar2);
      SendEvent(this_00,pCVar3,iVar1);
      iVar2 = iVar2 + 1;
      iVar1 = FUN_360caf20((int)local_1c);
    } while (iVar2 < iVar1);
  }
  FUN_360cd280((int *)local_1c);
  ExceptionList = local_c;
  return;
}

