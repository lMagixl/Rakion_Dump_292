
void __thiscall FUN_36019a40(void *this,undefined4 *param_1)

{
  xEncryptMemory *pxVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 local_24 [9];
  
  iVar5 = 9;
  pxVar1 = Xenesis2::Foundation::Memory::theEncryptMemory();
  uVar2 = FUN_36019460(pxVar1,iVar5);
  *(uint *)((int)this + 4) = uVar2;
  puVar3 = local_24;
  for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar3 = *param_1;
    param_1 = param_1 + 1;
    puVar3 = puVar3 + 1;
  }
  uVar6 = 9;
  puVar4 = local_24;
  *(undefined1 *)puVar3 = *(undefined1 *)param_1;
  pxVar1 = Xenesis2::Foundation::Memory::theEncryptMemory();
  FUN_3600ce60(pxVar1,uVar2,(int)puVar4,uVar6);
  return;
}

