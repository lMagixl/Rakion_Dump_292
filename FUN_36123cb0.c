
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_36123cb0(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  CSelection<class_CBrushVertex,2> *this;
  ulonglong uVar3;
  
  this = _pselbvxtSelectOnRender;
  if (_pselbvxtSelectOnRender == (CSelection<class_CBrushVertex,2> *)0x0) {
    return;
  }
  iVar1 = *param_2;
  if (iVar1 < 0) {
    return;
  }
  if (DAT_362fcc00 <= iVar1) {
    return;
  }
  iVar2 = param_2[1];
  if (-1 < iVar2) {
    if (DAT_362fcbfc <= iVar2) {
      return;
    }
    if (DAT_362fcc04 == 0) {
      uVar3 = FUN_361bfd6c();
      if (_pixDeltaAroundVertex <= (int)uVar3) {
        return;
      }
      if ((*(byte *)(param_1 + 0x3c) & 2) != 0) {
        FUN_361242e0(this,param_1);
        return;
      }
    }
    else {
      if (*(char *)(iVar2 * DAT_362fcc00 + iVar1 + DAT_362fcc04) == '\0') {
        return;
      }
      if (_bSelectAlternative != 0) {
        if ((*(byte *)(param_1 + 0x3c) & 2) == 0) {
          return;
        }
        FUN_361242e0(_pselbvxtSelectOnRender,param_1);
        return;
      }
      if ((*(byte *)(param_1 + 0x3c) & 2) != 0) {
        return;
      }
    }
    FUN_361242c0(this,param_1);
    return;
  }
  return;
}

