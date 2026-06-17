
uint __thiscall FUN_361a6940(void *this,char *param_1,uint param_2,uint param_3)

{
  char *pcVar1;
  char *_Str1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  char *pcVar6;
  
  if ((param_3 != 0) || (*(uint *)((int)this + 0x14) < param_2)) {
    if ((param_2 < *(uint *)((int)this + 0x14)) &&
       (uVar5 = *(uint *)((int)this + 0x14) - param_2, param_3 <= uVar5)) {
      puVar3 = (undefined4 *)((int)this + 4);
      pcVar6 = (char *)(uVar5 + (1 - param_3));
      puVar4 = puVar3;
      if (0xf < *(uint *)((int)this + 0x18)) {
        puVar4 = (undefined4 *)*puVar3;
      }
      pcVar1 = (char *)((int)puVar4 + param_2);
      _Str1 = (char *)FUN_361a4b40(pcVar1,(int)pcVar6,*param_1);
      while (_Str1 != (char *)0x0) {
        iVar2 = _strnicmp(_Str1,param_1,param_3);
        if (iVar2 == 0) {
          if (0xf < *(uint *)((int)this + 0x18)) {
            puVar3 = (undefined4 *)*puVar3;
          }
          return (int)_Str1 - (int)puVar3;
        }
        pcVar6 = pcVar1 + (int)(pcVar6 + (-1 - (int)_Str1));
        pcVar1 = _Str1 + 1;
        _Str1 = (char *)FUN_361a4b40(pcVar1,(int)pcVar6,*param_1);
      }
    }
    param_2 = 0xffffffff;
  }
  return param_2;
}

