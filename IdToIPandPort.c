
/* public: int __thiscall FieldInfo::IdToIPandPort(unsigned short,unsigned long &,unsigned short &)
    */

int __thiscall
FieldInfo::IdToIPandPort(FieldInfo *this,ushort param_1,ulong *param_2,ushort *param_3)

{
  int iVar1;
  FieldInfo *pFVar2;
  
                    /* 0x199f40  2277  ?IdToIPandPort@FieldInfo@@QAEHGAAKAAG@Z */
  iVar1 = 0;
  pFVar2 = this + 0x1ae;
  do {
    if (*(ushort *)pFVar2 == param_1) {
      *param_2 = *(ulong *)(this + iVar1 * 0x37c + 0x1e8);
      *param_3 = *(ushort *)(this + iVar1 * 0x37c + 0x1ec);
      return 1;
    }
    iVar1 = iVar1 + 1;
    pFVar2 = pFVar2 + 0x37c;
  } while (iVar1 < 0x14);
  return 0;
}

