
/* public: int __thiscall FieldInfo::IsGamePlaying(void) */

int __thiscall FieldInfo::IsGamePlaying(FieldInfo *this)

{
  int iVar1;
  FieldInfo *pFVar2;
  
                    /* 0x199c20  2399  ?IsGamePlaying@FieldInfo@@QAEHXZ */
  iVar1 = 0;
  pFVar2 = this + 0x1ac;
  do {
    if (*pFVar2 == (FieldInfo)0x3) {
      return 1;
    }
    iVar1 = iVar1 + 1;
    pFVar2 = pFVar2 + 0x37c;
  } while (iVar1 < 0x14);
  return 0;
}

