
undefined4 * __fastcall FUN_361b4620(undefined4 *param_1)

{
  xEncryptMemory *pxVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 local_c [3];
  
  iVar4 = 3;
  *param_1 = &PTR_FUN_36230738;
  pxVar1 = Xenesis2::Foundation::Memory::theEncryptMemory();
  uVar2 = FUN_36019460(pxVar1,iVar4);
  uVar5 = 3;
  puVar3 = local_c;
  local_c[0] = 0;
  param_1[1] = uVar2;
  pxVar1 = Xenesis2::Foundation::Memory::theEncryptMemory();
  FUN_3600ce60(pxVar1,uVar2,(int)puVar3,uVar5);
  return param_1;
}

