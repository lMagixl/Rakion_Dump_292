
undefined4 * __fastcall FUN_3601a3f0(undefined4 *param_1)

{
  xEncryptMemory *pxVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  undefined4 local_45 [8];
  undefined1 local_25;
  undefined4 local_24 [9];
  
  *param_1 = &PTR_FUN_362239d4;
  local_45[0] = 0;
  local_45[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  local_45[2] = 0;
  param_1[5] = 0;
  local_45[3] = 0;
  param_1[6] = 0;
  local_45[4] = 0;
  param_1[7] = 0;
  local_45[5] = 0;
  param_1[8] = 0;
  local_45[6] = 0;
  param_1[9] = 0;
  local_45[7] = 0;
  iVar6 = 9;
  *(undefined1 *)(param_1 + 10) = 0;
  local_25 = 0;
  pxVar1 = Xenesis2::Foundation::Memory::theEncryptMemory();
  uVar2 = FUN_36019460(pxVar1,iVar6);
  puVar3 = local_45;
  puVar4 = local_24;
  for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  uVar7 = 9;
  puVar5 = local_24;
  param_1[1] = uVar2;
  *(undefined1 *)puVar4 = *(undefined1 *)puVar3;
  pxVar1 = Xenesis2::Foundation::Memory::theEncryptMemory();
  FUN_3600ce60(pxVar1,uVar2,(int)puVar5,uVar7);
  return param_1;
}

