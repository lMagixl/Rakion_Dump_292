
void __cdecl FUN_36033b60(CTStream *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 local_dd;
  undefined1 local_d9;
  char *local_d8;
  undefined4 local_d4;
  CPlacement3D local_d0 [24];
  CModelObject local_b8 [172];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3620fde9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_d8 = StringDuplicate(&DAT_36222fa0);
  local_d4 = 0;
  local_4 = 0;
  CModelObject::CModelObject(local_b8);
  local_4 = CONCAT31(local_4._1_3_,1);
  operator>>(param_1,(CTFileName *)&local_d8);
  CModelObject::Read_t(local_b8,param_1);
  iVar2 = DAT_36225930;
  local_d9 = DAT_36225934;
  piVar1 = (int *)CTStream::PeekID_t(param_1);
  if (*piVar1 == iVar2) {
    local_d9 = DAT_3622593c;
    local_dd = DAT_36225938;
    CTStream::ExpectID_t(param_1,(CChunkID *)&local_dd);
    FUN_360336e0(param_1);
    FUN_360336e0(param_1);
    FUN_360336e0(param_1);
    FUN_360336e0(param_1);
  }
  else {
    FUN_360336e0(param_1);
  }
  iVar2 = DAT_36225940;
  local_d9 = DAT_36225944;
  piVar1 = (int *)CTStream::PeekID_t(param_1);
  if (*piVar1 == iVar2) {
    local_dd = DAT_36225948;
    local_d9 = DAT_3622594c;
    CTStream::ExpectID_t(param_1,(CChunkID *)&local_dd);
    iVar2 = **(int **)(param_1 + 0x14);
    *(int **)(param_1 + 0x14) = *(int **)(param_1 + 0x14) + 1;
    if (0 < iVar2) {
      do {
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 4;
        operator>>(param_1,local_d0);
        FUN_36033b60(param_1);
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  local_4 = local_4 & 0xffffff00;
  CModelObject::~CModelObject(local_b8);
  local_4 = 0xffffffff;
  StringFree(local_d8);
  ExceptionList = local_c;
  return;
}

