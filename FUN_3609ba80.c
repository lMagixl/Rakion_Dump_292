
void __cdecl FUN_3609ba80(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  uVar3 = DAT_362c9c68;
  iVar1 = DAT_362c9c60;
  iVar2 = param_3 * 0x2ee8 >> 0x10;
  iVar4 = param_2 + -2;
  uVar6 = DAT_362c9c70 * iVar4 + -2 + param_1 & DAT_362c9c68;
  iVar7 = param_3 * 0x6d95 >> 0x10;
  iVar5 = (uint)*(byte *)(DAT_362c9c60 + uVar6) + iVar2;
  if (iVar5 < 0) {
    iVar5 = 0;
  }
  else if (0xff < iVar5) {
    iVar5 = 0xff;
  }
  *(char *)(DAT_362c9c60 + uVar6) = (char)iVar5;
  uVar6 = DAT_362c9c70 * iVar4 + -1 + param_1 & uVar3;
  iVar5 = (uint)*(byte *)(iVar1 + uVar6) + iVar7;
  if (iVar5 < 0) {
    iVar5 = 0;
  }
  else if (0xff < iVar5) {
    iVar5 = 0xff;
  }
  *(char *)(iVar1 + uVar6) = (char)iVar5;
  uVar6 = DAT_362c9c70 * iVar4 + param_1 & uVar3;
  iVar5 = (uint)*(byte *)(iVar1 + uVar6) + iVar7;
  if (iVar5 < 0) {
    iVar5 = 0;
  }
  else if (0xff < iVar5) {
    iVar5 = 0xff;
  }
  *(char *)(iVar1 + uVar6) = (char)iVar5;
  uVar6 = DAT_362c9c70 * iVar4 + 1 + param_1 & uVar3;
  iVar5 = (uint)*(byte *)(iVar1 + uVar6) + iVar7;
  if (iVar5 < 0) {
    iVar5 = 0;
  }
  else if (0xff < iVar5) {
    iVar5 = 0xff;
  }
  *(char *)(iVar1 + uVar6) = (char)iVar5;
  uVar6 = DAT_362c9c70 * iVar4 + 2 + param_1 & uVar3;
  iVar4 = (uint)*(byte *)(iVar1 + uVar6) + iVar2;
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  else if (0xff < iVar4) {
    iVar4 = 0xff;
  }
  *(char *)(iVar1 + uVar6) = (char)iVar4;
  iVar5 = param_2 + -1;
  uVar6 = iVar5 * DAT_362c9c70 + -2 + param_1 & uVar3;
  iVar4 = (uint)*(byte *)(iVar1 + uVar6) + iVar7;
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  else if (0xff < iVar4) {
    iVar4 = 0xff;
  }
  *(char *)(iVar1 + uVar6) = (char)iVar4;
  uVar6 = iVar5 * DAT_362c9c70 + -1 + param_1 & uVar3;
  iVar4 = (uint)*(byte *)(iVar1 + uVar6) + iVar7;
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  else if (0xff < iVar4) {
    iVar4 = 0xff;
  }
  *(char *)(iVar1 + uVar6) = (char)iVar4;
  uVar6 = iVar5 * DAT_362c9c70 + param_1 & uVar3;
  iVar4 = (uint)*(byte *)(iVar1 + uVar6) + param_3;
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  else if (0xff < iVar4) {
    iVar4 = 0xff;
  }
  *(char *)(iVar1 + uVar6) = (char)iVar4;
  uVar6 = iVar5 * DAT_362c9c70 + 1 + param_1 & uVar3;
  iVar4 = (uint)*(byte *)(iVar1 + uVar6) + iVar7;
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  else if (0xff < iVar4) {
    iVar4 = 0xff;
  }
  *(char *)(iVar1 + uVar6) = (char)iVar4;
  uVar6 = iVar5 * DAT_362c9c70 + 2 + param_1 & uVar3;
  iVar4 = (uint)*(byte *)(iVar1 + uVar6) + iVar7;
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  else if (0xff < iVar4) {
    iVar4 = 0xff;
  }
  *(char *)(iVar1 + uVar6) = (char)iVar4;
  uVar6 = DAT_362c9c70 * param_2 + -2 + param_1 & uVar3;
  iVar4 = (uint)*(byte *)(iVar1 + uVar6) + iVar7;
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  else if (0xff < iVar4) {
    iVar4 = 0xff;
  }
  *(char *)(iVar1 + uVar6) = (char)iVar4;
  uVar6 = DAT_362c9c70 * param_2 + -1 + param_1 & uVar3;
  iVar4 = (uint)*(byte *)(iVar1 + uVar6) + param_3;
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  else if (0xff < iVar4) {
    iVar4 = 0xff;
  }
  *(char *)(iVar1 + uVar6) = (char)iVar4;
  uVar6 = DAT_362c9c70 * param_2 + param_1 & uVar3;
  iVar4 = (uint)*(byte *)(iVar1 + uVar6) + param_3;
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  else if (0xff < iVar4) {
    iVar4 = 0xff;
  }
  *(char *)(iVar1 + uVar6) = (char)iVar4;
  uVar6 = DAT_362c9c70 * param_2 + 1 + param_1 & uVar3;
  iVar4 = (uint)*(byte *)(iVar1 + uVar6) + param_3;
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  else if (0xff < iVar4) {
    iVar4 = 0xff;
  }
  *(char *)(iVar1 + uVar6) = (char)iVar4;
  uVar6 = DAT_362c9c70 * param_2 + 2 + param_1 & uVar3;
  iVar4 = (uint)*(byte *)(iVar1 + uVar6) + iVar7;
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  else if (0xff < iVar4) {
    iVar4 = 0xff;
  }
  *(char *)(iVar1 + uVar6) = (char)iVar4;
  iVar4 = param_2 + 1;
  uVar6 = iVar4 * DAT_362c9c70 + -2 + param_1 & uVar3;
  iVar5 = (uint)*(byte *)(uVar6 + iVar1) + iVar7;
  if (iVar5 < 0) {
    iVar5 = 0;
  }
  else if (0xff < iVar5) {
    iVar5 = 0xff;
  }
  *(char *)(iVar1 + uVar6) = (char)iVar5;
  uVar6 = iVar4 * DAT_362c9c70 + -1 + param_1 & uVar3;
  iVar5 = (uint)*(byte *)(uVar6 + iVar1) + iVar7;
  if (iVar5 < 0) {
    iVar5 = 0;
  }
  else if (0xff < iVar5) {
    iVar5 = 0xff;
  }
  *(char *)(iVar1 + uVar6) = (char)iVar5;
  uVar6 = iVar4 * DAT_362c9c70 + param_1 & uVar3;
  iVar5 = (uint)*(byte *)(iVar1 + uVar6) + param_3;
  if (iVar5 < 0) {
    iVar5 = 0;
  }
  else if (0xff < iVar5) {
    iVar5 = 0xff;
  }
  *(char *)(iVar1 + uVar6) = (char)iVar5;
  uVar6 = iVar4 * DAT_362c9c70 + 1 + param_1 & uVar3;
  iVar5 = (uint)*(byte *)(uVar6 + iVar1) + iVar7;
  if (iVar5 < 0) {
    iVar5 = 0;
  }
  else if (0xff < iVar5) {
    iVar5 = 0xff;
  }
  *(char *)(iVar1 + uVar6) = (char)iVar5;
  uVar6 = iVar4 * DAT_362c9c70 + 2 + param_1 & uVar3;
  iVar4 = (uint)*(byte *)(iVar1 + uVar6) + iVar7;
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  else if (0xff < iVar4) {
    iVar4 = 0xff;
  }
  *(char *)(iVar1 + uVar6) = (char)iVar4;
  iVar4 = param_2 + 2;
  uVar6 = iVar4 * DAT_362c9c70 + 2 + param_1 & uVar3;
  iVar5 = (uint)*(byte *)(uVar6 + iVar1) + iVar2;
  if (iVar5 < 0) {
    iVar5 = 0;
  }
  else if (0xff < iVar5) {
    iVar5 = 0xff;
  }
  *(char *)(iVar1 + uVar6) = (char)iVar5;
  uVar6 = iVar4 * DAT_362c9c70 + -1 + param_1 & uVar3;
  iVar5 = (uint)*(byte *)(uVar6 + iVar1) + iVar7;
  if (iVar5 < 0) {
    iVar5 = 0;
  }
  else if (0xff < iVar5) {
    iVar5 = 0xff;
  }
  *(char *)(iVar1 + uVar6) = (char)iVar5;
  uVar6 = iVar4 * DAT_362c9c70 + param_1 & uVar3;
  iVar5 = (uint)*(byte *)(iVar1 + uVar6) + iVar7;
  if (iVar5 < 0) {
    iVar5 = 0;
  }
  else if (0xff < iVar5) {
    iVar5 = 0xff;
  }
  *(char *)(iVar1 + uVar6) = (char)iVar5;
  uVar6 = iVar4 * DAT_362c9c70 + 1 + param_1 & uVar3;
  iVar7 = (uint)*(byte *)(uVar6 + iVar1) + iVar7;
  if (iVar7 < 0) {
    iVar7 = 0;
  }
  else if (0xff < iVar7) {
    iVar7 = 0xff;
  }
  *(char *)(uVar6 + iVar1) = (char)iVar7;
  uVar3 = iVar4 * DAT_362c9c70 + -2 + param_1 & uVar3;
  iVar2 = (uint)*(byte *)(uVar3 + iVar1) + iVar2;
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  else if (0xff < iVar2) {
    *(undefined1 *)(uVar3 + iVar1) = 0xff;
    return;
  }
  *(char *)(uVar3 + iVar1) = (char)iVar2;
  return;
}

