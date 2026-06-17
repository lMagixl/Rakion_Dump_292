
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_36030910(void)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  char *local_54;
  char *local_50;
  CProfileForm local_4c [28];
  int local_30;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3620f938;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pcVar1 = StringDuplicate(&DAT_36225478);
  local_4 = 0;
  local_54 = pcVar1;
  pcVar2 = StringDuplicate(&DAT_36225479);
  local_4._0_1_ = 1;
  local_50 = pcVar2;
  FUN_36030800(local_4c,&local_50,&local_54,0,5);
  local_4._0_1_ = 4;
  StringFree(pcVar2);
  local_4 = CONCAT31(local_4._1_3_,3);
  StringFree(pcVar1);
  DAT_362be260 = 0;
  DAT_362be264 = 0;
  DAT_362be268 = 0;
  DAT_362be26c = 0;
  DAT_362be270 = 0;
  DAT_362be274 = 0;
  DAT_362be278 = 0;
  DAT_362be27c = 0;
  uVar6 = 0xffffffff;
  iVar5 = 0x7fffffff;
  iVar3 = 10000;
  do {
    CProfileForm::Reset(local_4c);
    iVar4 = *(int *)(local_30 + 0x34);
    if ((iVar4 <= iVar5) && ((iVar4 < iVar5 || (*(uint *)(local_30 + 0x30) < uVar6)))) {
      iVar5 = iVar4;
      uVar6 = *(uint *)(local_30 + 0x30);
    }
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  uVar7 = 0xffffffff;
  iVar3 = 0x7fffffff;
  iVar4 = 10000;
  DAT_362be270 = uVar6;
  DAT_362be274 = iVar5;
  do {
    CProfileForm::Reset(local_4c);
    iVar5 = *(int *)(local_30 + 0x54);
    if ((iVar5 <= iVar3) && ((iVar5 < iVar3 || (*(uint *)(local_30 + 0x50) < uVar7)))) {
      iVar3 = iVar5;
      uVar7 = *(uint *)(local_30 + 0x50);
    }
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  uVar6 = 0xffffffff;
  iVar5 = 0x7fffffff;
  iVar4 = 10000;
  DAT_362be260 = uVar7;
  DAT_362be264 = iVar3;
  do {
    CProfileForm::Reset(local_4c);
    iVar3 = *(int *)(local_30 + 0x74);
    if ((iVar3 <= iVar5) && ((iVar3 < iVar5 || (*(uint *)(local_30 + 0x70) < uVar6)))) {
      iVar5 = iVar3;
      uVar6 = *(uint *)(local_30 + 0x70);
    }
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  DAT_362be268 = uVar6;
  DAT_362be26c = iVar5;
  CProfileForm::Reset(local_4c);
  _DAT_362be280 = *(undefined4 *)(local_30 + 0x30);
  _DAT_362be284 = *(undefined4 *)(local_30 + 0x34);
  local_4 = 0xffffffff;
  FUN_360313f0((int)local_4c);
  ExceptionList = local_c;
  return;
}

