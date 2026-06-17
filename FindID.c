
/* public: int __thiscall FieldInfo::FindID(unsigned short) */

int __thiscall FieldInfo::FindID(FieldInfo *this,ushort param_1)

{
  int iVar1;
  FieldInfo *pFVar2;
  
                    /* 0x199fa0  1636  ?FindID@FieldInfo@@QAEHG@Z */
  iVar1 = 0;
  pFVar2 = this + 0x1ae;
  do {
    if (*(ushort *)pFVar2 == param_1) {
      return 1;
    }
    iVar1 = iVar1 + 1;
    pFVar2 = pFVar2 + 0x37c;
  } while (iVar1 < 0x14);
  return 0;
}

