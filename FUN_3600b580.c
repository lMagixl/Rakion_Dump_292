
uint __thiscall
FUN_3600b580(void *this,uint param_1,char *param_2,uint param_3,char *param_4,uint param_5)

{
  uint uVar1;
  int iVar2;
  
  if (*(uint *)((int)this + 0x14) < param_1) {
    std::_String_base::_Xran(this);
  }
  uVar1 = *(int *)((int)this + 0x14) - param_1;
  if (uVar1 < param_3) {
    param_3 = uVar1;
  }
  if (param_3 != 0) {
    uVar1 = param_3;
    if (param_5 <= param_3) {
      uVar1 = param_5;
    }
    if (*(uint *)((int)this + 0x18) < 0x10) {
      iVar2 = (int)this + 4;
    }
    else {
      iVar2 = *(int *)((int)this + 4);
    }
    uVar1 = _strnicmp((char *)(iVar2 + param_1),param_4,uVar1);
    if (uVar1 != 0) {
      return uVar1;
    }
  }
  if (param_5 <= param_3) {
    return (uint)(param_3 != param_5);
  }
  return 0xffffffff;
}

