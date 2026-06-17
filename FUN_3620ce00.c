
void __cdecl FUN_3620ce00(uint param_1)

{
  uint uVar1;
  byte bVar2;
  
  bVar2 = 0;
  uVar1 = param_1 & 1;
  while (uVar1 == 0) {
    bVar2 = bVar2 + 1;
    uVar1 = param_1 & 1 << (bVar2 & 0x1f);
  }
  return;
}

