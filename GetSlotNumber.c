
/* public: short __thiscall FieldInfo::GetSlotNumber(unsigned long,unsigned short) */

short __thiscall FieldInfo::GetSlotNumber(FieldInfo *this,ulong param_1,ushort param_2)

{
  FieldInfo FVar1;
  int iVar2;
  FieldInfo *pFVar3;
  
                    /* 0x199c80  2126  ?GetSlotNumber@FieldInfo@@QAEFKG@Z */
  iVar2 = 0;
  pFVar3 = this + 0x1ac;
  do {
    FVar1 = *pFVar3;
    if ((((FVar1 == (FieldInfo)0x1) || (FVar1 == (FieldInfo)0x2)) || (FVar1 == (FieldInfo)0x3)) &&
       ((*(ulong *)(pFVar3 + 0x3c) == param_1 && (*(ushort *)(pFVar3 + 0x40) == param_2))))
    goto LAB_36199cc2;
    iVar2 = iVar2 + 1;
    pFVar3 = pFVar3 + 0x37c;
  } while (iVar2 < 0x14);
  iVar2 = 0xffff;
LAB_36199cc2:
  return (short)iVar2;
}

