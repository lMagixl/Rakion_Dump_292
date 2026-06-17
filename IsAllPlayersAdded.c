
/* public: int __thiscall FieldInfo::IsAllPlayersAdded(void) */

int __thiscall FieldInfo::IsAllPlayersAdded(FieldInfo *this)

{
  int iVar1;
  FieldInfo *pFVar2;
  FieldInfo *pFVar3;
  
                    /* 0x199be0  2356  ?IsAllPlayersAdded@FieldInfo@@QAEHXZ */
  iVar1 = 0;
  pFVar3 = this + 0x48a4;
  pFVar2 = this + 0x1ac;
  while ((*pFVar2 != (FieldInfo)0x3 || (*(int *)pFVar3 != 0))) {
    iVar1 = iVar1 + 1;
    pFVar3 = pFVar3 + 4;
    pFVar2 = pFVar2 + 0x37c;
    if (0x13 < iVar1) {
      return 1;
    }
  }
  return 0;
}

