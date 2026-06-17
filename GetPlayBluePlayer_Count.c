
/* public: unsigned char __thiscall FieldInfo::GetPlayBluePlayer_Count(void) */

uchar __thiscall FieldInfo::GetPlayBluePlayer_Count(FieldInfo *this)

{
  uchar uVar1;
  FieldInfo *pFVar2;
  FieldInfo *pFVar3;
  int iVar4;
  
                    /* 0x199ec0  2043  ?GetPlayBluePlayer_Count@FieldInfo@@QAEEXZ */
  uVar1 = '\0';
  pFVar3 = this + 0x48d0;
  pFVar2 = this + 0x2800;
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

