
/* int __cdecl IsOfSameClass(class CEntity *,class CEntity *) */

int __cdecl IsOfSameClass(CEntity *param_1,CEntity *param_2)

{
                    /* 0x124590  2435  ?IsOfSameClass@@YAHPAVCEntity@@0@Z */
  if ((param_1 != (CEntity *)0x0) && (param_2 != (CEntity *)0x0)) {
    return (uint)(*(int *)(*(int *)(param_1 + 0x78) + 0x20) ==
                 *(int *)(*(int *)(param_2 + 0x78) + 0x20));
  }
  return 0;
}

