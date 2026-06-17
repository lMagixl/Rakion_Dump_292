
/* public: unsigned char __thiscall FieldInfo::GetClientCount(unsigned char) */

uchar __thiscall FieldInfo::GetClientCount(FieldInfo *this,uchar param_1)

{
  FieldInfo FVar1;
  uchar uVar2;
  uint uVar3;
  FieldInfo *pFVar4;
  
                    /* 0x199d80  1762  ?GetClientCount@FieldInfo@@QAEEE@Z */
  uVar3 = (uint)param_1;
  uVar2 = '\0';
  if (uVar3 != 0) {
    pFVar4 = this + 0x1ac;
    do {
      FVar1 = *pFVar4;
      if (((FVar1 == (FieldInfo)0x3) || (FVar1 == (FieldInfo)0x1)) || (FVar1 == (FieldInfo)0x2)) {
        uVar2 = uVar2 + '\x01';
      }
      pFVar4 = pFVar4 + 0x37c;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return uVar2;
}

