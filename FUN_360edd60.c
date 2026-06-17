
uint __thiscall FUN_360edd60(void *this,CTString *param_1)

{
  ulong uVar1;
  uint *puVar2;
  
  uVar1 = CTString::GetHash(param_1);
  puVar2 = FUN_360edc60(this,uVar1,param_1);
  if (puVar2 == (uint *)0x0) {
    return 0;
  }
  return puVar2[1];
}

