
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CProfileForm::Report(class CTString &) */

void __thiscall CProfileForm::Report(CProfileForm *this,CTString *param_1)

{
  CProfileForm *pCVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  char *pcStack_38;
  uint local_34;
  int local_30;
  int local_2c;
  int local_28;
  undefined8 uStack_24;
  double dStack_1c;
  double dStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x30560  3157  ?Report@CProfileForm@@QAEXAAVCTString@@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_3620f8e0;
  pvStack_c = ExceptionList;
  pcVar5 = &DAT_362ba3e0;
  ExceptionList = &pvStack_c;
  if (*(int *)(this + 0x30) != 0) {
    ExceptionList = &pvStack_c;
    iVar2 = sprintf(&DAT_362ba3e0,s_WARNING__Some_timers_are_still_a_362254e8);
    pcVar5 = &DAT_362ba3e0 + iVar2;
  }
  CTimer::GetHighPrecisionTimer(_pTimer);
  local_2c = local_34 - *(uint *)(this + 0x38);
  local_28 = (local_30 - *(int *)(this + 0x3c)) - (uint)(local_34 < *(uint *)(this + 0x38));
  local_34 = *(uint *)(this + 0x28);
  local_30 = *(undefined4 *)(this + 0x2c);
  (*(code *)**(undefined4 **)this)();
  iVar2 = sprintf(pcVar5,s__s_profile_for_last__d__s__36225528);
  pcVar5 = pcVar5 + iVar2;
  uStack_24 = (double)CONCAT44(local_30,local_34) / (double)*(longlong *)_pTimer;
  dStack_14 = (double)CONCAT44(local_28,local_2c) / (double)*(longlong *)_pTimer;
  dStack_1c = uStack_24;
  pcStack_38 = (char *)(*(code *)**(undefined4 **)this)();
  iVar2 = sprintf(pcVar5,s_Module_time___6_2f___of_applicat_36225548,
                  (dStack_1c / dStack_14) * _DAT_362255b0,
                  (uStack_24 / (double)(int)pcStack_38) * _DAT_362255b8);
  iVar3 = sprintf(pcVar5 + iVar2,&DAT_3622558c);
  pcStack_38 = pcVar5 + iVar2 + iVar3;
  pCVar1 = this + 0x18;
  uStack_24._0_4_ = 0;
  uStack_4 = 0;
  uStack_24._4_4_ = pCVar1;
  if (0 < *(int *)pCVar1) {
    do {
      iVar3 = (int)uStack_24;
      iVar2 = *(int *)(this + 0x1c);
      iVar6 = (int)uStack_24 * 0x20;
      lVar8 = CONCAT44(local_30,local_34);
      lVar7 = CONCAT44(local_28,local_2c);
      iVar4 = (*(code *)**(undefined4 **)this)();
      FUN_360301b0((void *)(iVar6 + iVar2),(int *)&pcStack_38,iVar4,lVar7,lVar8);
      uStack_24._0_4_ = iVar3 + 1;
    } while ((int)uStack_24 < *(int *)pCVar1);
  }
  pcVar5 = pcStack_38;
  iVar2 = sprintf(pcStack_38,&DAT_36225590);
  pcStack_38 = pcVar5 + iVar2;
  pCVar1 = this + 0x10;
  uStack_24._0_4_ = 0;
  uStack_4 = 1;
  uStack_24._4_4_ = pCVar1;
  if (0 < *(int *)pCVar1) {
    do {
      iVar4 = (int)uStack_24;
      iVar3 = *(int *)(this + 0x14);
      iVar2 = (int)uStack_24 * 8;
      iVar6 = (*(code *)**(undefined4 **)this)();
      FUN_36030160((void *)(iVar3 + iVar2),(int *)&pcStack_38,iVar6);
      uStack_24._0_4_ = iVar4 + 1;
    } while ((int)uStack_24 < *(int *)pCVar1);
  }
  uStack_4 = 0xffffffff;
  sprintf(pcStack_38,s______________________36225594);
  pcVar5 = StringDuplicate(&DAT_362ba3e0);
  StringFree(*(char **)param_1);
  *(char **)param_1 = pcVar5;
  ExceptionList = pvStack_c;
  return;
}

