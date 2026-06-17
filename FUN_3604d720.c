
uint FUN_3604d720(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar1 = FUN_361bfd6c();
  uVar2 = FUN_361bfd6c();
  uVar3 = FUN_361bfd6c();
  return (uint)uVar3 & 0xff | (uint)CONCAT11((char)uVar1,(char)uVar2) << 8;
}

