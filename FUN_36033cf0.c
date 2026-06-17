
void __cdecl FUN_36033cf0(CTStream *param_1,CModelObject *param_2)

{
  CModelData *pCVar1;
  char *pcVar2;
  int iVar3;
  long lVar4;
  CListHead *this;
  char *local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3620fe03;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pCVar1 = CModelObject::GetData(param_2);
  if (pCVar1 == (CModelData *)0x0) {
    pcVar2 = StringDuplicate(&DAT_3622594d);
    local_4 = 0;
    local_14 = StringDuplicate(pcVar2);
    local_10 = 0;
    local_4._0_1_ = 1;
    operator<<(param_1,(CTFileName *)&local_14);
    local_4 = (uint)local_4._1_3_ << 8;
    StringFree(local_14);
    local_4 = 0xffffffff;
    StringFree(pcVar2);
  }
  else {
    operator<<(param_1,(CTFileName *)(pCVar1 + 0xc));
  }
  CModelObject::Write_t(param_2,param_1);
  local_14 = (char *)DAT_36225950;
  local_10._0_1_ = DAT_36225954;
  CTStream::WriteID_t(param_1,(CChunkID *)&local_14);
  FUN_36033780(param_1,(CTextureObject *)(param_2 + 0x24));
  FUN_36033780(param_1,(CTextureObject *)(param_2 + 0x6c));
  FUN_36033780(param_1,(CTextureObject *)(param_2 + 0x3c));
  FUN_36033780(param_1,(CTextureObject *)(param_2 + 0x54));
  this = (CListHead *)(param_2 + 0x9c);
  iVar3 = CListHead::IsEmpty(this);
  if (iVar3 == 0) {
    local_10 = CONCAT31(local_10._1_3_,DAT_3622595c);
    local_14 = (char *)DAT_36225958;
    CTStream::WriteID_t(param_1,(CChunkID *)&local_14);
    lVar4 = CListHead::Count(this);
    **(long **)(param_1 + 0x14) = lVar4;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 4;
    while (this = *(CListHead **)this, *(int *)this != 0) {
      **(undefined4 **)(param_1 + 0x14) = *(undefined4 *)(this + 8);
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 4;
      operator<<(param_1,(CPlacement3D *)(this + 0xc));
      FUN_36033cf0(param_1,(CModelObject *)(this + 0x24));
    }
  }
  ExceptionList = local_c;
  return;
}

