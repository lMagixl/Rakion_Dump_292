
void __cdecl FUN_360f45d0(CTString *param_1,undefined4 *param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  char *pcVar4;
  int iVar5;
  CTString *pCVar6;
  int iVar7;
  int iVar8;
  int local_18;
  char *local_14;
  char *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_362166c6;
  local_c = ExceptionList;
  bVar2 = false;
  bVar1 = false;
  if (*(int *)(_pNetwork + 0x14) == 0) {
    ExceptionList = &local_c;
    pcVar4 = Translate(s_ETRSOnly_server_can_kick_people__362335f0,4);
    CPrintF(pcVar4);
    ExceptionList = local_c;
    return;
  }
  iVar7 = *(int *)(_pNetwork + 0x18);
  local_18 = 0;
  ExceptionList = &local_c;
  iVar5 = FUN_360a5a70((undefined4 *)(iVar7 + 0xc));
  if (0 < iVar5) {
    iVar5 = 0;
    do {
      iVar8 = *(int *)(iVar7 + 0x10) + iVar5;
      if (*(int *)(*(int *)(iVar7 + 0x10) + iVar5) == 0) {
LAB_360f4697:
        bVar3 = false;
      }
      else {
        pCVar6 = (CTString *)
                 CPlayerCharacter::GetNameForPrinting((CPlayerCharacter *)(iVar8 + 0xb8));
        local_4 = 0;
        pCVar6 = (CTString *)CTString::Undecorated(pCVar6);
        bVar2 = true;
        bVar1 = true;
        local_4 = 1;
        iVar7 = CTString::Matches(pCVar6,param_1);
        bVar3 = true;
        if (iVar7 == 0) goto LAB_360f4697;
      }
      local_4 = 0;
      if (bVar1) {
        bVar1 = false;
        StringFree(local_14);
      }
      local_4 = 0xffffffff;
      if (bVar2) {
        bVar2 = false;
        StringFree(local_10);
      }
      if (bVar3) {
        FUN_360f4490(*(int *)(iVar8 + 0xa4),param_2);
      }
      local_18 = local_18 + 1;
      iVar7 = *(int *)(_pNetwork + 0x18);
      iVar5 = iVar5 + 0x100;
      iVar8 = FUN_360a5a70((undefined4 *)(iVar7 + 0xc));
    } while (local_18 < iVar8);
  }
  ExceptionList = local_c;
  return;
}

