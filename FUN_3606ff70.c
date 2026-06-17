
void __thiscall FUN_3606ff70(void *this,uint param_1)

{
  undefined4 *puVar1;
  short sVar2;
  undefined4 in_EAX;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  uint *puVar9;
  undefined8 uVar10;
  
  DAT_362bfa4c = in_EAX;
  FUN_3606ea40();
  if (DAT_362c4d58 != 0) {
    (*DAT_362c46b8)();
  }
  uVar8 = param_1 & 0x400;
  if (uVar8 == 0) {
    (*DAT_362c4628)();
  }
  else {
    (*DAT_362c45fc)();
  }
  DAT_362a3e5c = 0;
  if ((param_1 & 0x2000) == 0) {
    if ((param_1 & 0x800) == 0) {
      if ((param_1 & 0x1000) == 0) {
        if ((char)(param_1 >> 8) < '\0') {
          FUN_3606ead0(this,2);
          FUN_3606ead0(this,1);
          FUN_3606ead0(this,0);
          FUN_3606e1d0(this);
          FUN_3606f980();
        }
        else if ((param_1 & 0x10000) == 0) {
          if ((param_1 & 0x20000) == 0) {
            if ((param_1 & 0x40000) == 0) goto LAB_360701bb;
            FUN_3606ead0(this,3);
            FUN_3606ead0(this,2);
            FUN_3606ead0(this,1);
            FUN_3606ead0(this,0);
            FUN_3606e1d0(this);
            FUN_3606fc50();
          }
          else {
            FUN_3606ead0(this,3);
            FUN_3606ead0(this,2);
            FUN_3606ead0(this,0);
            FUN_3606e1d0(this);
            FUN_3606f6f0(2);
          }
        }
        else {
          FUN_3606ead0(this,3);
          FUN_3606ead0(this,1);
          FUN_3606ead0(this,0);
          FUN_3606e1d0(this);
          FUN_3606f6f0(1);
        }
      }
      else {
        FUN_3606ead0(this,2);
        FUN_3606ead0(this,0);
        FUN_3606e1d0(this);
        FUN_3606f4a0(2);
      }
    }
    else {
      FUN_3606ead0(this,1);
      FUN_3606ead0(this,0);
      FUN_3606e1d0(this);
      FUN_3606f4a0(1);
    }
  }
  else {
    FUN_3606ead0(this,3);
    FUN_3606ead0(this,0);
    FUN_3606e1d0(this);
    FUN_3606f2b0(0);
  }
  if (uVar8 != 0) {
    (*DAT_362c464c)(0x2c);
    (*DAT_362c4628)();
  }
LAB_360701bb:
  if ((param_1 & 0x4000) != 0) {
    FUN_3606ead0(this,3);
    FUN_3606ead0(this,2);
    FUN_3606e1d0(this);
    FUN_3606f2b0(2);
  }
  if ((param_1 & 0x7f800) != 0) {
    iVar6 = 1;
    if (1 < DAT_362bfa48) {
      do {
        FUN_3607b900(iVar6);
        (*DAT_362c4634)();
        iVar6 = iVar6 + 1;
      } while (iVar6 < DAT_362bfa48);
    }
    DAT_362a3e5c = 0;
    FUN_3607b900(0);
  }
  if ((param_1 & 0x10) != 0) {
    if (DAT_362bfa44 == 0) {
      if (DAT_362a416c == 0) {
        FUN_3606e170(0x7f7f7fff);
      }
      else {
        FUN_3606e0e0(0xff);
      }
      (*DAT_362c462c)();
    }
    else {
      if (DAT_362a416c == 0) {
        FUN_3606e170(0x3f3f3f7f);
      }
      else {
        FUN_3606e0e0(0x7f);
      }
      (*DAT_362c4600)();
      (*DAT_362c4648)(0x1b,0x1c);
    }
    (*DAT_362c4634)();
    for (puVar1 = this; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)*puVar1) {
      *(float *)(DAT_362bef74 + 0x20) = (float)(int)puVar1[4] + *(float *)(DAT_362bef74 + 0x20);
      *(int *)(_pGfx + 0xb34) = *(int *)(_pGfx + 0xb34) + puVar1[4];
      uVar5 = puVar1[4];
      iVar6 = DAT_362c3a8c + uVar5;
      DAT_362c3a8c = iVar6;
      iVar3 = FUN_3600bda0((undefined4 *)&DAT_362c3a84);
      if (iVar3 < iVar6) {
        iVar6 = FUN_3600bda0((undefined4 *)&DAT_362c3a84);
        FUN_360623a0(&DAT_362c3a84,iVar6 + ((int)(uVar5 - 1) / DAT_362c3a90 + 1) * DAT_362c3a90);
        iVar6 = DAT_362c3a8c;
      }
      puVar9 = (uint *)(DAT_362c3a88 + (iVar6 - uVar5) * 2);
      piVar7 = (int *)puVar1[3];
      iVar6 = puVar1[0x32];
      uVar4 = uVar5 >> 2;
      sVar2 = (short)iVar6;
      if (uVar4 != 0) {
        do {
          uVar10 = packssdw(*(undefined8 *)piVar7,*(undefined8 *)(piVar7 + 2));
          *(ulonglong *)puVar9 =
               CONCAT44((int)((ulonglong)uVar10 >> 0x20) + CONCAT22(sVar2,sVar2),
                        (int)uVar10 + CONCAT22(sVar2,sVar2));
          piVar7 = piVar7 + 4;
          puVar9 = puVar9 + 2;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      if ((uVar5 & 2) != 0) {
        *puVar9 = *piVar7 + iVar6 | (piVar7[1] + iVar6) * 0x10000;
        piVar7 = piVar7 + 2;
        puVar9 = puVar9 + 1;
      }
      if ((uVar5 & 1) != 0) {
        *(short *)puVar9 = (short)*piVar7 + sVar2;
      }
    }
    FUN_3606e9f0();
  }
  if ((param_1 & 1) != 0) {
    FUN_3606ead0(this,0);
    FUN_3606e1d0(this);
    FUN_3606efc0(0);
    if (uVar8 != 0) {
      (*DAT_362c464c)(0x2c);
      (*DAT_362c4628)();
    }
  }
  if ((param_1 & 2) != 0) {
    FUN_3606ead0(this,1);
    FUN_3606e1d0(this);
    FUN_3606efc0(1);
  }
  if ((param_1 & 4) != 0) {
    FUN_3606ead0(this,2);
    FUN_3606e1d0(this);
    FUN_3606efc0(2);
  }
  if ((param_1 & 8) != 0) {
    FUN_3606ead0(this,3);
    FUN_3606e1d0(this);
    FUN_3606f160();
  }
  if ((param_1 & 0x20) != 0) {
    FUN_3606ead0(this,1);
    FUN_3606e1d0(this);
    FUN_3606efc0(1);
  }
  if ((param_1 & 0x40) != 0) {
    FUN_3606ead0(this,2);
    FUN_3606e1d0(this);
    FUN_3606efc0(2);
  }
  if ((char)param_1 < '\0') {
    FUN_3606e310();
    FUN_3606e170(DAT_362c3b94);
    FUN_3606ece0();
    for (puVar1 = this; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)*puVar1) {
      if ((puVar1[0x34] & 0x200) != 0) {
        uVar8 = puVar1[4];
        iVar6 = DAT_362c3a8c + uVar8;
        DAT_362c3a8c = iVar6;
        iVar3 = FUN_3600bda0((undefined4 *)&DAT_362c3a84);
        if (iVar3 < iVar6) {
          iVar6 = FUN_3600bda0((undefined4 *)&DAT_362c3a84);
          FUN_360623a0(&DAT_362c3a84,iVar6 + ((int)(uVar8 - 1) / DAT_362c3a90 + 1) * DAT_362c3a90);
          iVar6 = DAT_362c3a8c;
        }
        puVar9 = (uint *)(DAT_362c3a88 + (iVar6 - uVar8) * 2);
        piVar7 = (int *)puVar1[3];
        iVar6 = puVar1[0x32];
        uVar5 = uVar8 >> 2;
        sVar2 = (short)iVar6;
        if (uVar5 != 0) {
          do {
            uVar10 = packssdw(*(undefined8 *)piVar7,*(undefined8 *)(piVar7 + 2));
            *(ulonglong *)puVar9 =
                 CONCAT44((int)((ulonglong)uVar10 >> 0x20) + CONCAT22(sVar2,sVar2),
                          (int)uVar10 + CONCAT22(sVar2,sVar2));
            piVar7 = piVar7 + 4;
            puVar9 = puVar9 + 2;
            uVar5 = uVar5 - 1;
          } while (uVar5 != 0);
        }
        if ((uVar8 & 2) != 0) {
          *puVar9 = *piVar7 + iVar6 | (piVar7[1] + iVar6) * 0x10000;
          piVar7 = piVar7 + 2;
          puVar9 = puVar9 + 1;
        }
        if ((uVar8 & 1) != 0) {
          *(short *)puVar9 = (short)*piVar7 + sVar2;
        }
      }
    }
    FUN_3606e9f0();
  }
  if ((param_1 & 0x100) != 0) {
    FUN_3606e350();
    FUN_3606e170(DAT_362c3b08);
    FUN_3606edd0();
    for (puVar1 = this; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)*puVar1) {
      if ((puVar1[0x34] & 0x400) != 0) {
        uVar8 = puVar1[4];
        iVar6 = DAT_362c3a8c + uVar8;
        DAT_362c3a8c = iVar6;
        iVar3 = FUN_3600bda0((undefined4 *)&DAT_362c3a84);
        if (iVar3 < iVar6) {
          iVar6 = FUN_3600bda0((undefined4 *)&DAT_362c3a84);
          FUN_360623a0(&DAT_362c3a84,iVar6 + ((int)(uVar8 - 1) / DAT_362c3a90 + 1) * DAT_362c3a90);
          iVar6 = DAT_362c3a8c;
        }
        puVar9 = (uint *)(DAT_362c3a88 + (iVar6 - uVar8) * 2);
        piVar7 = (int *)puVar1[3];
        iVar6 = puVar1[0x32];
        uVar5 = uVar8 >> 2;
        sVar2 = (short)iVar6;
        if (uVar5 != 0) {
          do {
            uVar10 = packssdw(*(undefined8 *)piVar7,*(undefined8 *)(piVar7 + 2));
            *(ulonglong *)puVar9 =
                 CONCAT44((int)((ulonglong)uVar10 >> 0x20) + CONCAT22(sVar2,sVar2),
                          (int)uVar10 + CONCAT22(sVar2,sVar2));
            piVar7 = piVar7 + 4;
            puVar9 = puVar9 + 2;
            uVar5 = uVar5 - 1;
          } while (uVar5 != 0);
        }
        if ((uVar8 & 2) != 0) {
          *puVar9 = *piVar7 + iVar6 | (piVar7[1] + iVar6) * 0x10000;
          piVar7 = piVar7 + 2;
          puVar9 = puVar9 + 1;
        }
        if ((uVar8 & 1) != 0) {
          *(short *)puVar9 = (short)*piVar7 + sVar2;
        }
      }
    }
    FUN_3606e9f0();
  }
  (*DAT_362c464c)(0x2b);
  (*DAT_362c4628)();
  if ((param_1 & 0x200) != 0) {
    (*DAT_362c4600)();
    (*DAT_362c4648)(0x1b,0x1c);
    FUN_3606e170(DAT_362bfa50 | 0x80);
    (*DAT_362c4634)();
    for (puVar1 = this; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)*puVar1) {
      *(float *)(DAT_362bef74 + 0x20) = (float)(int)puVar1[4] + *(float *)(DAT_362bef74 + 0x20);
      *(int *)(_pGfx + 0xb34) = *(int *)(_pGfx + 0xb34) + puVar1[4];
      uVar8 = puVar1[4];
      iVar6 = DAT_362c3a8c + uVar8;
      DAT_362c3a8c = iVar6;
      iVar3 = FUN_3600bda0((undefined4 *)&DAT_362c3a84);
      if (iVar3 < iVar6) {
        iVar6 = FUN_3600bda0((undefined4 *)&DAT_362c3a84);
        FUN_360623a0(&DAT_362c3a84,iVar6 + ((int)(uVar8 - 1) / DAT_362c3a90 + 1) * DAT_362c3a90);
        iVar6 = DAT_362c3a8c;
      }
      puVar9 = (uint *)(DAT_362c3a88 + (iVar6 - uVar8) * 2);
      piVar7 = (int *)puVar1[3];
      iVar6 = puVar1[0x32];
      uVar5 = uVar8 >> 2;
      sVar2 = (short)iVar6;
      if (uVar5 != 0) {
        do {
          uVar10 = packssdw(*(undefined8 *)piVar7,*(undefined8 *)(piVar7 + 2));
          *(ulonglong *)puVar9 =
               CONCAT44((int)((ulonglong)uVar10 >> 0x20) + CONCAT22(sVar2,sVar2),
                        (int)uVar10 + CONCAT22(sVar2,sVar2));
          piVar7 = piVar7 + 4;
          puVar9 = puVar9 + 2;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
      if ((uVar8 & 2) != 0) {
        *puVar9 = *piVar7 + iVar6 | (piVar7[1] + iVar6) * 0x10000;
        piVar7 = piVar7 + 2;
        puVar9 = puVar9 + 1;
      }
      if ((uVar8 & 1) != 0) {
        *(short *)puVar9 = (short)*piVar7 + sVar2;
      }
    }
    FUN_3606e9f0();
  }
  if (DAT_362c5454 != 0) {
    (*DAT_362c4600)();
    (*DAT_362c4648)(0x1b,0x1c);
    FUN_3606e170(0xbfbf00de);
    (*DAT_362c4634)();
    (*DAT_362c4678)(0x5c);
    (*DAT_362c45f8)();
    (*DAT_362c45f0)();
    (*DAT_362c464c)(0x30);
    (*DAT_362c4650)(0,0);
    for (; this != (undefined4 *)0x0; this = *(void **)this) {
      *(float *)(DAT_362bef74 + 0x20) =
           (float)*(int *)((int)this + 0x10) + *(float *)(DAT_362bef74 + 0x20);
      *(int *)(_pGfx + 0xb34) = *(int *)(_pGfx + 0xb34) + *(int *)((int)this + 0x10);
      uVar8 = *(uint *)((int)this + 0x10);
      iVar6 = DAT_362c3a8c + uVar8;
      DAT_362c3a8c = iVar6;
      iVar3 = FUN_3600bda0((undefined4 *)&DAT_362c3a84);
      if (iVar3 < iVar6) {
        iVar6 = FUN_3600bda0((undefined4 *)&DAT_362c3a84);
        FUN_360623a0(&DAT_362c3a84,iVar6 + ((int)(uVar8 - 1) / DAT_362c3a90 + 1) * DAT_362c3a90);
        iVar6 = DAT_362c3a8c;
      }
      puVar9 = (uint *)(DAT_362c3a88 + (iVar6 - uVar8) * 2);
      piVar7 = *(int **)((int)this + 0xc);
      iVar6 = *(int *)((int)this + 200);
      uVar5 = uVar8 >> 2;
      sVar2 = (short)iVar6;
      if (uVar5 != 0) {
        do {
          uVar10 = packssdw(*(undefined8 *)piVar7,*(undefined8 *)(piVar7 + 2));
          *(ulonglong *)puVar9 =
               CONCAT44((int)((ulonglong)uVar10 >> 0x20) + CONCAT22(sVar2,sVar2),
                        (int)uVar10 + CONCAT22(sVar2,sVar2));
          piVar7 = piVar7 + 4;
          puVar9 = puVar9 + 2;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
      if ((uVar8 & 2) != 0) {
        *puVar9 = *piVar7 + iVar6 | (piVar7[1] + iVar6) * 0x10000;
        piVar7 = piVar7 + 2;
        puVar9 = puVar9 + 1;
      }
      if ((uVar8 & 1) != 0) {
        *(short *)puVar9 = (short)*piVar7 + sVar2;
      }
    }
    FUN_3606e9f0();
    (*DAT_362c4650)(*(undefined4 *)(DAT_362c3a70 + 0x13c),*(undefined4 *)(DAT_362c3a70 + 0x140));
    (*DAT_362c464c)(0x2b);
    if (DAT_362bfa44 != 0) {
      (*DAT_362c461c)();
    }
    (*DAT_362c4678)(0x5b);
  }
  FUN_3607acb0();
  return;
}

