
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FUN_3600e690(void *this,undefined4 *param_1)

{
  xEncryptMemory *this_00;
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 local_98 [35];
  undefined4 local_c;
  
  local_c = DAT_362abd90;
  puVar2 = local_98;
  for (iVar1 = 0x21; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  uVar3 = *(uint *)((int)this + 4);
  uVar4 = 9;
  puVar2 = local_98;
  this_00 = Xenesis2::Foundation::Memory::theEncryptMemory();
  FUN_3600cdd0(this_00,uVar3,puVar2,uVar4);
  puVar2 = local_98;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = *puVar2;
    puVar2 = puVar2 + 1;
    param_1 = param_1 + 1;
  }
  *(undefined1 *)param_1 = *(undefined1 *)puVar2;
  return;
}

