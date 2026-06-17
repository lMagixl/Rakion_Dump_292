
/* public: unsigned char __thiscall FieldInfo::GetPlayRedPlayer_Count(void) */

uchar __thiscall FieldInfo::GetPlayRedPlayer_Count(FieldInfo *this)

{
  uchar uVar1;
  FieldInfo *pFVar2;
  FieldInfo *pFVar3;
  int iVar4;
  
                    /* 0x199e40  2045  ?GetPlayRedPlayer_Count@FieldInfo@@QAEEXZ */
  uVar1 = '\0';
  pFVar3 = this + 0x48a8;
  pFVar2 = this + 0x528;
  iVar4 = 2;
  do {
    if ((pFVar2[-0x37c] == (FieldInfo)0x3) && (*(int *)(pFVar3 + -4) != 0)) {
      uVar1 = uVar1 + '\x01';
    }
    if ((*pFVar2 == (FieldInfo)0x3) && (*(int *)pFVar3 != 0)) {
      uVar1 = uVar1 + '\x01';
    }
    if ((pFVar2[0x37c] == (FieldInfo)0x3) && (*(int *)(pFVar3 + 4) != 0)) {
      uVar1 = uVar1 + '\x01';
    }
    if ((pFVar2[0x6f8] == (FieldInfo)0x3) && (*(int *)(pFVar3 + 8) != 0)) {
      uVar1 = uVar1 + '\x01';
    }
    if ((pFVar2[0xa74] == (FieldInfo)0x3) && (*(int *)(pFVar3 + 0xc) != 0)) {
      uVar1 = uVar1 + '\x01';
    }
    pFVar3 = pFVar3 + 0x14;
    pFVar2 = pFVar2 + 0x116c;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return uVar1;
}

