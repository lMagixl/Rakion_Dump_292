
uint * __fastcall FUN_36161520(uint *param_1)

{
  uint uVar1;
  int in_EAX;
  
  uVar1 = *(uint *)(&DAT_362fe008 + (in_EAX % 0x1e) * 4);
  *(uint *)(&DAT_362fe008 + (in_EAX % 0x1e) * 4) = uVar1 | 0xff000000;
  *param_1 = uVar1 | 0xff000000;
  return param_1;
}

