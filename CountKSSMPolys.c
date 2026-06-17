
/* public: long __thiscall CFontData::CountKSSMPolys(char *) */

long __thiscall CFontData::CountKSSMPolys(CFontData *this,char *param_1)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  bool bVar4;
  
                    /* 0x187830  1406  ?CountKSSMPolys@CFontData@@QAEJPAD@Z */
  iVar3 = 0;
  if (param_1 == (char *)0x0) {
    return 0;
  }
  bVar1 = *param_1;
  do {
    if (bVar1 == 0) {
      return iVar3;
    }
    if ((_buseMultiByte == 1) && (bVar1 = *param_1, (char)bVar1 < '\0')) {
      uVar2 = CONCAT11(bVar1,param_1[1]);
      param_1 = param_1 + 2;
      if (uVar2 != 0xa2e7) {
        if ((&DAT_362a6cd8)[bVar1 >> 2 & 0x1f] != '\0') {
          iVar3 = iVar3 + 1;
        }
        if ((&DAT_362a6cf7)[uVar2 >> 5 & 0x1f] != '\0') {
          iVar3 = iVar3 + 1;
        }
        bVar4 = (&DAT_362a6d16)[uVar2 & 0x1f] == '\0';
        goto LAB_361878af;
      }
LAB_361878b1:
      iVar3 = iVar3 + 1;
    }
    else {
      bVar1 = *param_1;
      param_1 = param_1 + 1;
      bVar4 = bVar1 == 0x20;
LAB_361878af:
      if (!bVar4) goto LAB_361878b1;
    }
    bVar1 = *param_1;
  } while( true );
}

