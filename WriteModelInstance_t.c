
/* void __cdecl WriteModelInstance_t(class CTStream &,class CModelInstance &,int) */

void __cdecl WriteModelInstance_t(CTStream *param_1,CModelInstance *param_2,int param_3)

{
  int iVar1;
  CTString *pCVar2;
  CChunkID *pCVar3;
  undefined4 local_16;
  undefined1 local_12;
  undefined4 local_11;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x34b40  3974  ?WriteModelInstance_t@@YAXAAVCTStream@@AAVCModelInstance@@H@Z
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3620fed7;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_36036000((undefined4 *)(param_2 + 0x44));
  local_16 = DAT_362259e8;
  local_12 = DAT_362259ec;
  if (0 < iVar1) {
    local_16 = DAT_362259e0;
    local_12 = DAT_362259e4;
  }
  CTStream::WriteID_t(param_1,(CChunkID *)&local_16);
  if ((param_3 != 0) && (*(int *)(param_2 + 0x5c) != 0)) {
    local_12 = DAT_362259f4;
    local_16 = DAT_362259f0;
    CTStream::WriteID_t(param_1,(CChunkID *)&local_16);
    operator<<(param_1,(CTFileName *)(*(int *)(param_2 + 0x5c) + 0xc));
  }
  pCVar2 = (CTString *)CModelInstance::GetName(param_2);
  local_4 = 0;
  operator<<(param_1,pCVar2);
  local_4 = 0xffffffff;
  StringFree((char *)param_1);
  **(undefined4 **)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0xec);
  iVar1 = *(int *)(param_1 + 0x14);
  *(undefined4 **)(param_1 + 0x14) = (undefined4 *)(iVar1 + 4);
  *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(param_2 + 0x90);
  *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(param_2 + 0x94);
  *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(param_2 + 0x98);
  iVar1 = *(int *)(param_1 + 0x14);
  *(undefined4 **)(param_1 + 0x14) = (undefined4 *)(iVar1 + 0xc);
  *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(param_2 + 0xf0);
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 4;
  FUN_36033e70((int)param_2);
  FUN_36034080((int)param_2);
  FUN_36034170((int *)param_2);
  FUN_36034720((int)param_2);
  FUN_360347f0((int)param_2);
  FUN_36034220();
  FUN_360349f0(param_2,param_1);
  iVar1 = FUN_36036000((undefined4 *)(param_2 + 0x44));
  if (iVar1 < 1) {
    local_11 = DAT_36225a00;
    local_d = DAT_36225a04;
    pCVar3 = (CChunkID *)&local_11;
  }
  else {
    local_16 = DAT_362259f8;
    local_12 = DAT_362259fc;
    pCVar3 = (CChunkID *)&local_16;
  }
  CTStream::WriteID_t(param_1,pCVar3);
  ExceptionList = local_c;
  return;
}

