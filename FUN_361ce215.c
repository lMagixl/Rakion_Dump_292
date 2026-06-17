
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_361ce215(void)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  float fVar8;
  
  iVar6 = 0;
  _DAT_36383c40 = 0;
  DAT_36383c3c = 0;
  DAT_36383c34 = (short *)&DAT_36383840;
  DAT_36383c30 = (undefined4 *)&DAT_36383070;
  _DAT_36383840 = 0;
LAB_361ce245:
  DAT_36383c38 = (char *)0xffffffff;
LAB_361ce24d:
  iVar3 = (int)(short)(&DAT_362ac058)[iVar6];
  if (iVar3 == 0) {
    if (((int)DAT_36383c38 < 0) &&
       (DAT_36383c38 = FUN_361cd3c6((int)DAT_36383c48), (int)DAT_36383c38 < 0)) {
      DAT_36383c38 = (char *)0x0;
    }
    if (((((short)(&DAT_362ac150)[iVar6] != 0) &&
         (pcVar4 = DAT_36383c38 + (short)(&DAT_362ac150)[iVar6], -1 < (int)pcVar4)) &&
        ((int)pcVar4 < 0x108)) &&
       ((char *)(int)*(short *)(&DAT_362ac520 + (int)pcVar4 * 2) == DAT_36383c38)) {
      if (&DAT_36383c26 <= DAT_36383c34) goto LAB_361ce5f0;
      iVar6 = (int)*(short *)(&DAT_362ac310 + (int)pcVar4 * 2);
      DAT_36383c34 = DAT_36383c34 + 1;
      *DAT_36383c34 = *(short *)(&DAT_362ac310 + (int)pcVar4 * 2);
      DAT_36383c30 = DAT_36383c30 + 1;
      *DAT_36383c30 = DAT_36383c28;
      DAT_36383c38 = (char *)0xffffffff;
      if (0 < DAT_36383c3c) {
        DAT_36383c3c = DAT_36383c3c + -1;
      }
      goto LAB_361ce24d;
    }
    if ((((short)(&DAT_362ac218)[iVar6] != 0) &&
        (pcVar4 = DAT_36383c38 + (short)(&DAT_362ac218)[iVar6], -1 < (int)pcVar4)) &&
       (((int)pcVar4 < 0x108 &&
        ((char *)(int)*(short *)(&DAT_362ac520 + (int)pcVar4 * 2) == DAT_36383c38)))) {
      iVar3 = (int)*(short *)(&DAT_362ac310 + (int)pcVar4 * 2);
      goto LAB_361ce333;
    }
    if (DAT_36383c3c == 0) {
      FUN_361cc398((int)DAT_36383c48,s_syntax_error_36249504);
      _DAT_36383c40 = _DAT_36383c40 + 1;
    }
    if (2 < DAT_36383c3c) goto LAB_361ce5e7;
    DAT_36383c3c = 3;
    while ((((short)(&DAT_362ac150)[*DAT_36383c34] == 0 ||
            (iVar6 = (short)(&DAT_362ac150)[*DAT_36383c34] + 0x100, iVar6 < 0)) ||
           ((0x107 < iVar6 || (*(short *)(&DAT_362ac520 + iVar6 * 2) != 0x100))))) {
      if (DAT_36383c34 < (short *)0x36383841) {
        DAT_36383c3c = 3;
        return 1;
      }
      DAT_36383c34 = DAT_36383c34 + -1;
      DAT_36383c30 = DAT_36383c30 + -1;
    }
    if ((short *)0x36383c25 < DAT_36383c34) goto LAB_361ce5f0;
    sVar1 = *(short *)(&DAT_362ac310 + iVar6 * 2);
    DAT_36383c34 = DAT_36383c34 + 1;
    *DAT_36383c34 = sVar1;
    uVar2 = DAT_36383c28;
  }
  else {
LAB_361ce333:
    iVar6 = (int)*(short *)(&DAT_362abff0 + iVar3 * 2);
    DAT_36383c2c = DAT_36383c30[1 - iVar6];
    switch(iVar3) {
    case 1:
      fVar8 = 0.0;
      break;
    case 2:
      fVar8 = 1.4013e-45;
      break;
    case 3:
      fVar8 = 5.60519e-45;
      break;
    case 4:
      fVar8 = 7.00649e-45;
      break;
    case 5:
      fVar8 = 8.40779e-45;
      break;
    case 6:
      fVar8 = 9.80909e-45;
      break;
    case 7:
      fVar8 = 1.12104e-44;
      break;
    case 8:
      fVar8 = 1.26117e-44;
      break;
    case 9:
      fVar8 = 1.4013e-44;
      break;
    case 10:
      fVar8 = 1.54143e-44;
      break;
    case 0xb:
      fVar8 = 1.68156e-44;
      break;
    case 0xc:
      fVar8 = 1.82169e-44;
      break;
    case 0xd:
      fVar8 = 1.96182e-44;
      break;
    case 0xe:
      fVar8 = 2.10195e-44;
      break;
    case 0xf:
      fVar8 = 2.24208e-44;
      break;
    case 0x10:
      fVar8 = 2.38221e-44;
      break;
    case 0x11:
      fVar8 = 2.52234e-44;
      break;
    case 0x12:
      fVar8 = 2.66247e-44;
      break;
    case 0x13:
      fVar8 = 2.8026e-44;
      break;
    case 0x14:
      fVar8 = 2.94273e-44;
      break;
    case 0x15:
      fVar8 = 3.08286e-44;
      break;
    case 0x16:
      fVar8 = 3.22299e-44;
      break;
    case 0x17:
      fVar8 = 3.36312e-44;
      break;
    case 0x18:
      fVar8 = 3.50325e-44;
      break;
    case 0x19:
      fVar8 = 3.64338e-44;
      break;
    case 0x1a:
      fVar8 = 3.78351e-44;
      break;
    case 0x1b:
      fVar8 = 3.92364e-44;
      break;
    case 0x1c:
      fVar8 = 4.06377e-44;
      break;
    case 0x1d:
      fVar8 = 4.2039e-44;
      break;
    case 0x1e:
      fVar8 = 4.34403e-44;
      break;
    case 0x1f:
      fVar8 = 4.48416e-44;
      break;
    case 0x20:
      fVar8 = 4.62428e-44;
      break;
    case 0x21:
      fVar8 = 4.76441e-44;
      break;
    case 0x22:
      fVar8 = 4.90454e-44;
      break;
    case 0x23:
      fVar8 = 5.04467e-44;
      break;
    case 0x24:
      fVar8 = 5.1848e-44;
      break;
    case 0x25:
      fVar8 = 5.32493e-44;
      break;
    case 0x26:
      fVar8 = 5.46506e-44;
      break;
    case 0x27:
      fVar8 = 5.60519e-44;
      break;
    case 0x28:
      fVar8 = 5.74532e-44;
      break;
    case 0x29:
      fVar8 = 5.88545e-44;
      break;
    case 0x2a:
      fVar8 = 6.02558e-44;
      break;
    case 0x2b:
      fVar8 = 6.16571e-44;
      break;
    case 0x2c:
      fVar8 = 6.30584e-44;
      break;
    case 0x2d:
      fVar8 = 6.44597e-44;
      break;
    case 0x2e:
      fVar8 = 6.5861e-44;
      break;
    case 0x2f:
      fVar8 = 6.72623e-44;
      break;
    case 0x30:
      fVar8 = 6.86636e-44;
      break;
    case 0x31:
      fVar8 = 7.00649e-44;
      break;
    default:
      goto switchD_361ce35d_default;
    }
    FUN_361cd8de(DAT_36383c48,fVar8);
switchD_361ce35d_default:
    DAT_36383c34 = DAT_36383c34 + -iVar6;
    iVar5 = (int)*DAT_36383c34;
    DAT_36383c30 = DAT_36383c30 + -iVar6;
    if ((iVar5 == 0) && (*(short *)(&DAT_362abf88 + iVar3 * 2) == 0)) {
      DAT_36383c34 = DAT_36383c34 + 1;
      iVar6 = 3;
      *DAT_36383c34 = 3;
      DAT_36383c30 = DAT_36383c30 + 1;
      *DAT_36383c30 = DAT_36383c2c;
      bVar7 = DAT_36383c38 == (char *)0x0;
      if ((int)DAT_36383c38 < 0) {
        DAT_36383c38 = FUN_361cd3c6((int)DAT_36383c48);
        bVar7 = DAT_36383c38 == (char *)0x0;
        if ((int)DAT_36383c38 < 0) {
          DAT_36383c38 = (char *)0x0;
          bVar7 = true;
        }
      }
      if (bVar7) {
        return 0;
      }
      goto LAB_361ce24d;
    }
    iVar6 = *(short *)(&DAT_362abf88 + iVar3 * 2) * 2;
    if ((((*(short *)(&DAT_362ac2e0 + iVar6) == 0) ||
         (iVar3 = *(short *)(&DAT_362ac2e0 + iVar6) + iVar5, iVar3 < 0)) || (0x107 < iVar3)) ||
       (*(short *)(&DAT_362ac520 + iVar3 * 2) != iVar5)) {
      sVar1 = *(short *)(&DAT_362ac120 + iVar6);
    }
    else {
      sVar1 = *(short *)(&DAT_362ac310 + iVar3 * 2);
    }
    if ((short *)0x36383c25 < DAT_36383c34) {
LAB_361ce5f0:
      FUN_361cc398((int)DAT_36383c48,s_yacc_stack_overflow_36249984);
      return 1;
    }
    DAT_36383c34 = DAT_36383c34 + 1;
    *DAT_36383c34 = sVar1;
    uVar2 = DAT_36383c2c;
  }
  iVar6 = (int)sVar1;
  DAT_36383c30 = DAT_36383c30 + 1;
  *DAT_36383c30 = uVar2;
  goto LAB_361ce24d;
LAB_361ce5e7:
  if (DAT_36383c38 == (char *)0x0) {
    return 1;
  }
  goto LAB_361ce245;
}

