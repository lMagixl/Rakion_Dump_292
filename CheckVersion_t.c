
/* public: void __thiscall CNetworkLibrary::CheckVersion_t(class CTStream &,int,int &) */

void __thiscall
CNetworkLibrary::CheckVersion_t(CNetworkLibrary *this,CTStream *param_1,int param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 local_5;
  undefined1 local_1;
  
                    /* 0xf4d30  1196  ?CheckVersion_t@CNetworkLibrary@@QAEXAAVCTStream@@HAAH@Z */
  iVar1 = DAT_36234f74;
  local_1 = DAT_36234f78;
  piVar2 = (int *)CTStream::PeekID_t(param_1);
  if (*piVar2 != iVar1) {
    *param_3 = 0;
    return;
  }
  local_1 = DAT_36234f80;
  local_5 = DAT_36234f7c;
  CTStream::ExpectID_t(param_1,(CChunkID *)&local_5);
  iVar1 = **(int **)(param_1 + 0x14);
  *(int **)(param_1 + 0x14) = *(int **)(param_1 + 0x14) + 1;
  if (10000 < iVar1) {
    uVar4 = *(undefined4 *)(param_1 + 0x20);
    pcVar3 = s_ETRSFile___s__was_saved_by_a_new_36234f88;
LAB_360f4dd0:
    pcVar3 = Translate(pcVar3,4);
    ThrowF_t(pcVar3,uVar4);
    return;
  }
  if ((iVar1 == 10000) || (9999 < iVar1)) {
    *param_3 = 0;
  }
  else {
    *param_3 = 1;
    if (param_2 == 0) {
      uVar4 = *(undefined4 *)(param_1 + 0x20);
      pcVar3 = s_ETRSFile___s__was_saved_by_an_ol_36234fd8;
      goto LAB_360f4dd0;
    }
  }
  return;
}

