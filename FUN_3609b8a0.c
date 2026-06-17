
void __cdecl FUN_3609b8a0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  uVar7 = DAT_362c9c68;
  iVar1 = DAT_362c9c60;
  iVar2 = param_3 * 0x2ee8 >> 0x10;
  iVar6 = param_3 * 0x6d95 >> 0x10;
  iVar4 = param_2 + -1;
  uVar3 = iVar4 * DAT_362c9c70 + -1 + param_1 & DAT_362c9c68;
  iVar5 = (uint)*(byte *)(DAT_362c9c60 + uVar3) + iVar2;
  if (iVar5 < 0) {
    iVar5 = 0;
  }
  else if (0xff < iVar5) {
    iVar5 = 0xff;
  }
  *(char *)(DAT_362c9c60 + uVar3) = (char)iVar5;
  uVar3 = iVar4 * DAT_362c9c70 + param_1 & uVar7;
  iVar5 = (uint)*(byte *)(iVar1 + uVar3) + iVar6;
  if (iVar5 < 0) {
    iVar5 = 0;
  }
  else if (0xff < iVar5) {
    iVar5 = 0xff;
  }
  *(char *)(iVar1 + uVar3) = (char)iVar5;
  uVar3 = iVar4 * DAT_362c9c70 + 1 + param_1 & uVar7;
  iVar4 = (uint)*(byte *)(iVar1 + uVar3) + iVar2;
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  else if (0xff < iVar4) {
    iVar4 = 0xff;
  }
  *(char *)(iVar1 + uVar3) = (char)iVar4;
  uVar3 = DAT_362c9c70 * param_2 + -1 + param_1 & uVar7;
  iVar4 = (uint)*(byte *)(iVar1 + uVar3) + iVar6;
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  else if (0xff < iVar4) {
    iVar4 = 0xff;
  }
  *(char *)(iVar1 + uVar3) = (char)iVar4;
  uVar3 = DAT_362c9c70 * param_2 + param_1 & uVar7;
  iVar4 = (uint)*(byte *)(iVar1 + uVar3) + param_3;
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  else if (0xff < iVar4) {
    iVar4 = 0xff;
  }
  *(char *)(iVar1 + uVar3) = (char)iVar4;
  uVar3 = DAT_362c9c70 * param_2 + 1 + param_1 & uVar7;
  iVar4 = (uint)*(byte *)(iVar1 + uVar3) + iVar6;
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  else if (0xff < iVar4) {
    iVar4 = 0xff;
  }
  *(char *)(iVar1 + uVar3) = (char)iVar4;
  iVar5 = param_2 + 1;
  uVar3 = iVar5 * DAT_362c9c70 + -1 + param_1 & uVar7;
  iVar4 = (uint)*(byte *)(iVar1 + uVar3) + iVar2;
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  else if (0xff < iVar4) {
    iVar4 = 0xff;
  }
  *(char *)(iVar1 + uVar3) = (char)iVar4;
  uVar3 = iVar5 * DAT_362c9c70 + param_1 & uVar7;
  iVar6 = (uint)*(byte *)(iVar1 + uVar3) + iVar6;
  if (iVar6 < 0) {
    iVar6 = 0;
  }
  else if (0xff < iVar6) {
    iVar6 = 0xff;
  }
  *(char *)(iVar1 + uVar3) = (char)iVar6;
  uVar7 = iVar5 * DAT_362c9c70 + 1 + param_1 & uVar7;
  iVar2 = (uint)*(byte *)(iVar1 + uVar7) + iVar2;
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  else if (0xff < iVar2) {
    *(undefined1 *)(iVar1 + uVar7) = 0xff;
    return;
  }
  *(char *)(iVar1 + uVar7) = (char)iVar2;
  return;
}

