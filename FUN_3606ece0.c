
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_3606ece0(void)

{
  int iVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  byte bVar5;
  undefined4 *in_EAX;
  int iVar6;
  int iVar7;
  float *pfVar8;
  
  iVar6 = (*DAT_362c46c8)(4,0,DAT_362bfa4c,0x66);
  do {
    if (in_EAX == (undefined4 *)0x0) {
      (*DAT_362c46cc)(4,0);
      return;
    }
    iVar1 = iVar6 + in_EAX[0x32] * 8;
    bVar4 = false;
    if ((int)in_EAX[2] < 1) {
LAB_3606eda4:
      in_EAX[0x34] = in_EAX[0x34] & 0xfffffdff;
    }
    else {
      pfVar8 = (float *)(DAT_362c3a78 + in_EAX[1] * 0xc + 8);
      iVar7 = 0;
      do {
        fVar3 = (_DAT_362c3be8 * *pfVar8 + _DAT_362c3be4 * pfVar8[-1] + _DAT_362c3be0 * pfVar8[-2] +
                _DAT_362c3b24) * DAT_362c3b20;
        if ((fVar3 <= _DAT_362c3b3c) || (_DAT_362c3b40 <= fVar3)) {
          bVar5 = 0;
        }
        else {
          bVar5 = 1;
        }
        bVar4 = (bool)(bVar4 | bVar5);
        fVar2 = *pfVar8;
        iVar7 = iVar7 + 1;
        pfVar8 = pfVar8 + 3;
        _DAT_362bfa54 = fVar3;
        *(float *)(iVar1 + -8 + iVar7 * 8) = _DAT_362bfa58 * fVar2;
        *(float *)(iVar1 + -4 + iVar7 * 8) = fVar3;
      } while (iVar7 < (int)in_EAX[2]);
      if (!bVar4) goto LAB_3606eda4;
    }
    in_EAX = (undefined4 *)*in_EAX;
  } while( true );
}

