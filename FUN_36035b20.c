
void __fastcall FUN_36035b20(CModelInstance *param_1,CTStream *param_2,int param_3,char *param_4)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  CModelInstanceSerial *pCVar4;
  CChunkID *pCVar5;
  undefined4 local_1e;
  undefined1 local_1a;
  undefined4 local_19;
  undefined1 local_15;
  char *local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  pcVar2 = param_4;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3620ffa5;
  local_c = ExceptionList;
  local_1e = DAT_36225aa0;
  local_1a = DAT_36225aa4;
  if (param_4 != (char *)0x0) {
    local_1e = DAT_36225a98;
    local_1a = DAT_36225a9c;
  }
  ExceptionList = &local_c;
  CTStream::ExpectID_t(param_2,(CChunkID *)&local_1e);
  iVar1 = DAT_36225aa8;
  local_1a = DAT_36225aac;
  piVar3 = (int *)CTStream::PeekID_t(param_2);
  if (*piVar3 == iVar1) {
    local_14 = StringDuplicate(&DAT_36222fa0);
    local_10 = 0;
    local_4 = 0;
    local_1e = DAT_36225ab0;
    local_1a = DAT_36225ab4;
    CTStream::ExpectID_t(param_2,(CChunkID *)&local_1e);
    operator>>(param_2,(CTFileName *)&local_14);
    if (param_3 != 0) {
      pCVar4 = CStock_CModelInstance::Obtain_t(_pModelInstanceStock,(CTFileName *)&local_14);
      *(CModelInstanceSerial **)(param_1 + 0x5c) = pCVar4;
    }
    local_4 = 0xffffffff;
    StringFree(local_14);
  }
  param_4 = StringDuplicate(&DAT_36222fa0);
  local_4 = 1;
  operator>>(param_2,(CTString *)&param_4);
  CModelInstance::SetName(param_1,(CTString *)&param_4);
  *(undefined4 *)(param_1 + 0xec) = **(undefined4 **)(param_2 + 0x14);
  iVar1 = *(int *)(param_2 + 0x14);
  *(undefined4 **)(param_2 + 0x14) = (undefined4 *)(iVar1 + 4);
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(iVar1 + 4);
  *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(iVar1 + 8);
  *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(param_2 + 0x14);
  *(undefined4 **)(param_2 + 0x14) = (undefined4 *)(iVar1 + 0xc);
  *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(iVar1 + 0xc);
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 4;
  FUN_36034e80((int)param_1);
  if (pcVar2 != (char *)0x0) {
    FUN_36034340((int)param_1);
  }
  FUN_36034450();
  FUN_360350b0((int)param_1);
  FUN_36035890((char *)param_1);
  FUN_36034ce0((int)param_1);
  FUN_36035170((char *)param_1);
  if (pcVar2 == (char *)0x0) {
    local_19 = DAT_36225ac0;
    local_15 = DAT_36225ac4;
    pCVar5 = (CChunkID *)&local_19;
  }
  else {
    local_1e = DAT_36225ab8;
    local_1a = DAT_36225abc;
    pCVar5 = (CChunkID *)&local_1e;
  }
  CTStream::ExpectID_t(param_2,pCVar5);
  local_4 = 0xffffffff;
  StringFree(param_4);
  ExceptionList = local_c;
  return;
}

