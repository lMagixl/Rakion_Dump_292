
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl
FUN_3611ead0(undefined4 param_1,undefined4 param_2,CAnyProjection3D *param_3,undefined4 *param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined1 param_8)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  _DAT_362faabc = param_1;
  _DAT_362faaec = param_2;
  _DAT_362faaf0 = 0;
  CAnyProjection3D::operator=((CAnyProjection3D *)&DAT_362faaf4,param_3);
  _DAT_362faac0 = 0;
  _DAT_362faad4 = *param_4;
  _DAT_362faad8 = param_4[1];
  _DAT_362faadc = param_4[2];
  _DAT_362faae0 = param_4[3];
  _DAT_362faae4 = param_4[4];
  _DAT_362faae8 = param_4[5];
  uVar3 = FUN_361bfd6c();
  iVar1 = (int)uVar3;
  uVar3 = FUN_361bfd6c();
  FUN_36117000(&DAT_362faab8,0,0,(int)uVar3,iVar1);
  _DAT_362fb7f8 = 1;
  _DAT_362fb7fc = (uint)(*(CAnyProjection3D **)(param_3 + 0x658) == param_3 + 0x4b8);
  DAT_362fb80c = 0;
  DAT_362fb810 = 0;
  _DAT_362c9680 = 0;
  _DAT_362fb800 = param_5;
  _DAT_362fb804 = param_6;
  _DAT_362fb808 = param_7;
  DAT_362fb814 = param_8;
  FUN_3611e240((float *)&DAT_362faab8);
  uVar2 = 0;
  if (DAT_362fb80c == 0) {
    uVar2 = 4;
  }
  if (DAT_362fb810 == 0 && _DAT_362c9680 == 0) {
    uVar2 = uVar2 | 8;
  }
  return uVar2;
}

