
void __thiscall FUN_360e4b50(void *this,int param_1)

{
  ulong uVar1;
  uint *puVar2;
  CTString *this_00;
  
  this_00 = (CTString *)(param_1 + 4);
  uVar1 = CTString::GetHash(this_00);
  puVar2 = FUN_360e49b0(this,uVar1,(undefined4 *)this_00);
  if (puVar2 != (uint *)0x0) {
    puVar2[1] = 0;
  }
  return;
}

