
int __cdecl FUN_36131540(CEntity *param_1,long param_2,undefined4 *param_3)

{
  int iVar1;
  CClipTest local_70 [4];
  undefined4 local_6c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36218e81;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = CListHead::IsEmpty((CListHead *)(param_1 + 0xac));
  if (iVar1 != 0) {
    CEntity::FindSectorsAroundEntity(param_1);
  }
  CClipTest::CClipTest(local_70);
  local_4 = 0;
  iVar1 = CClipTest::CanChange(local_70,param_1,param_2);
  *param_3 = local_6c;
  local_4 = 0xffffffff;
  CClipTest::~CClipTest(local_70);
  ExceptionList = local_c;
  return iVar1;
}

