
void __thiscall FUN_360eddb0(void *this,int param_1)

{
  ulong uVar1;
  uint *puVar2;
  CTString *this_00;
  
  this_00 = (CTString *)(param_1 + 0xc);
  uVar1 = CTString::GetHash(this_00);
  puVar2 = FUN_360edc60(this,uVar1,this_00);
  if (puVar2 != (uint *)0x0) {
    puVar2[1] = 0;
  }
  return;
}

