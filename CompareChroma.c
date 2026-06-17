
/* int __cdecl CompareChroma(unsigned long,unsigned long) */

int __cdecl CompareChroma(ulong param_1,ulong param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  undefined4 local_c;
  undefined4 local_8;
  
                    /* 0x62ef0  1348  ?CompareChroma@@YAHKK@Z */
  iVar2 = IsBigger(param_2,param_1);
  uVar3 = param_1;
  if (iVar2 != 0) {
    uVar3 = param_2;
    param_2 = param_1;
  }
  uVar6 = uVar3 >> 0x18;
  local_c = uVar3 >> 0x10 & 0xff;
  local_8 = uVar3 >> 8 & 0xff;
  uVar1 = param_2 >> 0x18;
  param_1 = param_2 >> 0x10 & 0xff;
  param_2 = param_2 >> 8 & 0xff;
  uVar5 = local_c;
  if (local_c <= uVar6) {
    uVar5 = uVar6;
  }
  uVar4 = local_8;
  if (local_8 <= uVar5) {
    uVar4 = uVar5;
  }
  uVar5 = param_1;
  if (param_1 <= uVar1) {
    uVar5 = uVar1;
  }
  if (uVar5 < param_2) {
    uVar5 = param_2;
  }
  if ((uVar4 < 4) || (uVar5 < 4)) {
    return 1;
  }
  if (uVar6 == uVar4) {
    iVar2 = (int)(0x10000 / (ulonglong)(longlong)(int)uVar6) * uVar1;
    uVar6 = uVar1;
    uVar3 = (int)(iVar2 * local_c) >> 0x10;
    uVar7 = (int)(iVar2 * local_8) >> 0x10;
  }
  else if (local_c == uVar4) {
    iVar2 = (int)(0x10000 / (ulonglong)(longlong)(int)local_c) * param_1;
    uVar6 = (int)(iVar2 * uVar6) >> 0x10;
    uVar3 = param_1;
    uVar7 = (int)(iVar2 * local_8) >> 0x10;
  }
  else {
    iVar2 = (int)(0x10000 / (ulonglong)(longlong)(int)local_8) * param_2;
    uVar6 = (int)(iVar2 * uVar6) >> 0x10;
    uVar3 = (int)(iVar2 * local_c) >> 0x10;
    uVar7 = param_2;
  }
  uVar5 = (int)(uVar6 - uVar1) >> 0x1f;
  if (((int)((uVar6 - uVar1 ^ uVar5) - uVar5) < 3) &&
     (uVar6 = (int)(uVar3 - param_1) >> 0x1f, (int)((uVar3 - param_1 ^ uVar6) - uVar6) < 3)) {
    uVar6 = (int)(uVar7 - param_2) >> 0x1f;
    return (uint)((int)((uVar7 - param_2 ^ uVar6) - uVar6) < 3);
  }
  return 0;
}

