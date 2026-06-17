
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_3606edd0(void)

{
  int iVar1;
  bool bVar2;
  undefined4 *in_EAX;
  int iVar3;
  int iVar4;
  float *pfVar5;
  
  iVar3 = (*DAT_362c46c8)(4,0,DAT_362bfa4c,0x66);
  do {
    if (in_EAX == (undefined4 *)0x0) {
      (*DAT_362c46cc)(4,0);
      return;
    }
    iVar1 = iVar3 + in_EAX[0x32] * 8;
    bVar2 = false;
    iVar4 = 0;
    if ((int)in_EAX[2] < 1) {
LAB_3606ee72:
      in_EAX[0x34] = in_EAX[0x34] & 0xfffffbff;
    }
    else {
      pfVar5 = (float *)(DAT_362c3a78 + in_EAX[1] * 0xc + 8);
      do {
        _DAT_362bfa54 = (_DAT_362bfa5c + *pfVar5) * _DAT_362bfa60;
        bVar2 = (bool)(bVar2 | _DAT_362c3b50 < _DAT_362bfa54);
        *(float *)(iVar1 + iVar4 * 8) = _DAT_362bfa54;
        *(undefined4 *)(iVar1 + 4 + iVar4 * 8) = 0;
        iVar4 = iVar4 + 1;
        pfVar5 = pfVar5 + 3;
      } while (iVar4 < (int)in_EAX[2]);
      if (!bVar2) goto LAB_3606ee72;
    }
    in_EAX = (undefined4 *)*in_EAX;
  } while( true );
}

