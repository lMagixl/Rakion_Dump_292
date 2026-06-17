
void __thiscall FUN_36022810(void *this,CTString *param_1)

{
  ulong uVar1;
  uint *puVar2;
  
  uVar1 = CTString::GetHash(param_1);
  puVar2 = FUN_360226c0(this,uVar1,param_1);
  if (puVar2 != (uint *)0x0) {
    puVar2[1] = 0;
  }
  return;
}

