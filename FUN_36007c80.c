
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x36007cc2) */
/* WARNING: Removing unreachable block (ram,0x36007caf) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_36007c80(void)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3620d310;
  local_c = ExceptionList;
  local_10 = DAT_362abd90;
  local_14 = 0;
  iVar1 = cpuid_basic_info(0);
  local_20 = *(undefined4 *)(iVar1 + 4);
  local_1c = *(undefined4 *)(iVar1 + 8);
  local_18 = *(undefined4 *)(iVar1 + 0xc);
  puVar2 = (uint *)cpuid_Version_info(1);
  uVar3 = *puVar2;
  uVar7 = puVar2[2];
  ExceptionList = &local_c;
  pcVar4 = Translate(s_ETRSYes_36222714,4);
  pcVar4 = StringDuplicate(pcVar4);
  local_4 = 0;
  pcVar5 = Translate(s_ETRSNo_3622271c,4);
  pcVar5 = StringDuplicate(pcVar5);
  local_4 = CONCAT31(local_4._1_3_,1);
  pcVar6 = StringDuplicate((char *)&local_20);
  StringFree(DAT_362b8dec);
  _DAT_362b2abc = (uint)((uVar7 & 0x800000) != 0);
  _DAT_362b2ac0 = (uint)((uVar7 & 0x2000000) != 0);
  _DAT_362b2ac4 = (uint)((uVar7 & 0x8000) != 0);
  _DAT_362b2aac = uVar3 >> 0xc & 3;
  _DAT_362b2ab0 = uVar3 >> 8 & 0xf;
  _DAT_362b2ab4 = uVar3 >> 4 & 0xf;
  _DAT_362b2ab8 = uVar3 & 0xf;
  DAT_362b8dec = pcVar6;
  uVar8 = FUN_361bfd6c();
  _DAT_362b2ac8 = (undefined4)uVar8;
  if ((uVar7 & 0x800000) == 0) {
    pcVar6 = Translate(s_ETRSMMX_support_required_but_not_36222724,4);
    FatalError(pcVar6);
  }
  local_4 = local_4 & 0xffffff00;
  StringFree(pcVar5);
  local_4 = 0xffffffff;
  StringFree(pcVar4);
  ExceptionList = local_c;
  return;
}

