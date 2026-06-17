
void __cdecl FUN_36034500(CTStream *param_1,CModelObject *param_2)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  CAttachmentModelObject *pCVar4;
  CPlacement3D local_44 [32];
  char *local_24;
  undefined4 local_20;
  int local_1c;
  undefined1 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_3620fe87;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffac;
  ExceptionList = &local_10;
  local_24 = StringDuplicate(&DAT_36222fa0);
  local_20 = 0;
  local_8 = 0;
  operator>>(param_1,(CTFileName *)&local_24);
  local_8._0_1_ = 1;
  CModelObject::SetData_t(param_2,(CTFileName *)&local_24);
  local_8 = (uint)local_8._1_3_ << 8;
  CModelObject::Read_t(param_2,param_1);
  iVar1 = DAT_36225910;
  local_18 = DAT_36225914;
  piVar3 = (int *)CTStream::PeekID_t(param_1);
  if (*piVar3 == iVar1) {
    local_1c = DAT_36225918;
    local_18 = DAT_3622591c;
    CTStream::ExpectID_t(param_1,(CChunkID *)&local_1c);
    FUN_360335d0(param_1,(CTextureObject *)(param_2 + 0x24));
    FUN_360335d0(param_1,(CTextureObject *)(param_2 + 0x6c));
    FUN_360335d0(param_1,(CTextureObject *)(param_2 + 0x3c));
    FUN_360335d0(param_1,(CTextureObject *)(param_2 + 0x54));
  }
  else {
    FUN_360335d0(param_1,(CTextureObject *)(param_2 + 0x24));
  }
  iVar1 = DAT_36225920;
  local_18 = DAT_36225924;
  piVar3 = (int *)CTStream::PeekID_t(param_1);
  if (*piVar3 == iVar1) {
    local_1c = DAT_36225928;
    local_18 = DAT_3622592c;
    CTStream::ExpectID_t(param_1,(CChunkID *)&local_1c);
    iVar1 = **(int **)(param_1 + 0x14);
    *(int **)(param_1 + 0x14) = *(int **)(param_1 + 0x14) + 1;
    if (0 < iVar1) {
      do {
        local_1c = iVar1;
        lVar2 = **(long **)(param_1 + 0x14);
        *(long **)(param_1 + 0x14) = *(long **)(param_1 + 0x14) + 1;
        pCVar4 = CModelObject::AddAttachmentModel(param_2,lVar2);
        if (pCVar4 == (CAttachmentModelObject *)0x0) {
          operator>>(param_1,local_44);
          FUN_36033b60(param_1);
        }
        else {
          operator>>(param_1,(CPlacement3D *)(pCVar4 + 0xc));
          FUN_36034500(param_1,(CModelObject *)(pCVar4 + 0x24));
        }
        local_1c = local_1c + -1;
        iVar1 = local_1c;
      } while (local_1c != 0);
    }
  }
  local_8 = 0xffffffff;
  StringFree(local_24);
  ExceptionList = local_10;
  return;
}

