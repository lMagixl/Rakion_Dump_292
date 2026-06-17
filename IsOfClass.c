
/* int __cdecl IsOfClass(class CEntity *,char const *) */

int __cdecl IsOfClass(CEntity *param_1,char *param_2)

{
  byte bVar1;
  byte *pbVar2;
  bool bVar3;
  
                    /* 0x124520  2434  ?IsOfClass@@YAHPAVCEntity@@PBD@Z */
  if ((param_1 == (CEntity *)0x0) || (param_2 == (char *)0x0)) {
    return 0;
  }
  pbVar2 = *(byte **)(*(int *)(*(int *)(param_1 + 0x78) + 0x20) + 0x20);
  while( true ) {
    bVar1 = *pbVar2;
    bVar3 = bVar1 < (byte)*param_2;
    if (bVar1 != *param_2) break;
    if (bVar1 == 0) {
      return 1;
    }
    bVar1 = pbVar2[1];
    bVar3 = bVar1 < (byte)param_2[1];
    if (bVar1 != param_2[1]) break;
    pbVar2 = pbVar2 + 2;
    param_2 = param_2 + 2;
    if (bVar1 == 0) {
      return 1;
    }
  }
  return (uint)(1 - bVar3 == (uint)(bVar3 != 0));
}

