
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_360a1b80(undefined4 *param_1,int param_2)

{
  int iVar1;
  
  if (_DAT_362a51f4 < _DAT_3622376c) {
    _DAT_362a51f4 = 0.0;
  }
  else if (_DAT_362a51f4 < _DAT_36223384 == (_DAT_362a51f4 == _DAT_36223384)) {
    _DAT_362a51f4 = 1.0;
  }
  if (_DAT_362a51f8 < _DAT_3622376c) {
    _DAT_362a51f8 = 0.0;
  }
  else if (_DAT_362a51f8 < _DAT_36223384 == (_DAT_362a51f8 == _DAT_36223384)) {
    _DAT_362a51f8 = 1.0;
  }
  DAT_362ca240 = param_1;
  _DAT_362ca248 = *(undefined4 *)(_pSound + 0x50);
  iVar1 = param_2 / 4;
  DAT_362ca244 = iVar1;
  for (; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = 0;
    param_1 = param_1 + 1;
  }
  return;
}

