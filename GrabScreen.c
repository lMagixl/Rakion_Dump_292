
/* public: void __thiscall CDrawPort::GrabScreen(class CImageInfo &,long)const  */

void __thiscall CDrawPort::GrabScreen(CDrawPort *this,CImageInfo *param_1,long param_2)

{
  byte bVar1;
  int iVar2;
  void *pvVar3;
  uchar *puVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  ushort *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined4 uVar11;
  undefined1 auStack_30 [12];
  int *piStack_24;
  int *piStack_20;
  float fStack_18;
  int iStack_14;
  int *piStack_10;
  int *piStack_8;
  
                    /* 0x65360  2220  ?GrabScreen@CDrawPort@@QBEXAAVCImageInfo@@J@Z */
  iVar5 = *(int *)(_pGfx + 0xa38);
  if (iVar5 == 0) {
    if (param_2 == 1) {
      if (DAT_362c53cc != 0) {
LAB_360654f5:
        bVar1 = 1;
        goto LAB_3606539a;
      }
    }
    else if (param_2 == 2) goto LAB_360654f5;
  }
  bVar1 = 0;
LAB_3606539a:
  CImageInfo::Clear(param_1);
  iVar2 = *(int *)(this + 8);
  iVar7 = *(int *)(this + 0x10);
  *(int *)param_1 = iVar7 - iVar2;
  *(int *)(param_1 + 4) = *(int *)(this + 0x14) - *(int *)(this + 0xc);
  iVar7 = *(int *)(param_1 + 4) * (iVar7 - iVar2);
  iVar2 = (uint)bVar1 * 8 + 0x18;
  *(int *)(param_1 + 8) = iVar2;
  iVar2 = iVar2 * iVar7;
  pvVar3 = AllocMemory((int)(iVar2 + (iVar2 >> 0x1f & 7U)) >> 3);
  *(void **)(param_1 + 0xc) = pvVar3;
  if (iVar5 == 0) {
    uVar11 = 0x1907;
    (*DAT_362c4148)(*(int *)(this + 8),*(int *)(*(int *)this + 0x68) - *(int *)(this + 0x14),
                    *(int *)(this + 0x10) - *(int *)(this + 8),
                    *(int *)(this + 0x14) - *(int *)(this + 0xc),0x1907,0x1401);
    if (iStack_14 != 0) {
      puVar4 = AllocMemory(iVar7 * 4);
      (*DAT_362c4148)(uVar11,fStack_18,*(int *)(this + 0x10) - *(int *)(this + 8),
                      *(int *)(this + 0x14) - *(int *)(this + 0xc),0x1902,0x1406,puVar4);
      iVar5 = 0;
      if (0 < iVar7) {
        iStack_14 = 0x437f0000;
        do {
          fStack_18 = *(float *)(puVar4 + iVar5 * 4);
          puVar4[iVar5] = 0xff - (char)(int)ROUND(fStack_18 * 255.0);
          iVar5 = iVar5 + 1;
        } while (iVar5 < iVar7);
      }
      AddAlphaChannel(*(uchar **)(param_1 + 0xc),(ulong *)*(uchar **)(param_1 + 0xc),
                      *(int *)(param_1 + 4) * *(int *)param_1,puVar4);
      FreeMemory(puVar4);
    }
    FlipBitmap(*(uchar **)(param_1 + 0xc),*(uchar **)(param_1 + 0xc),*(long *)param_1,
               *(long *)(param_1 + 4),2,(uint)(*(int *)(param_1 + 8) == 0x20));
    return;
  }
  if (iVar5 == 1) {
    if ((*(uint *)(_pGfx + 0xa54) & 0x200) == 0) {
      puVar8 = *(ushort **)(*(int *)(*(int *)this + 4) + 0x7c);
      (**(code **)(*(int *)puVar8 + 0x10))(puVar8,0,0);
    }
    else {
      puVar8 = *(ushort **)(_pGfx + 0xa5c);
      (**(code **)(*(int *)puVar8 + 0x40))(puVar8,0,0);
    }
    puVar10 = auStack_30;
    (**(code **)(*piStack_8 + 0x20))(piStack_8);
    uVar11 = *(undefined4 *)(this + 8);
    (**(code **)(*piStack_10 + 0x24))(piStack_10,&stack0xffffffb0,&stack0xffffffb8,0x10);
    puVar9 = *(undefined1 **)(param_1 + 0xc);
    iVar5 = 0;
    if (*(int *)(this + 0x14) != *(int *)(this + 0xc) &&
        -1 < *(int *)(this + 0x14) - *(int *)(this + 0xc)) {
      iVar2 = *(int *)(this + 0x10) - *(int *)(this + 8);
      piVar6 = piStack_24;
      do {
        iVar7 = 0;
        if (0 < iVar2) {
          do {
            iVar2 = FUN_36075cf0(puVar8,uVar11,&piStack_24);
            *puVar9 = (char)((uint)iVar2 >> 0x18);
            puVar9[1] = (char)((uint)iVar2 >> 0x10);
            puVar9[2] = (char)((uint)iVar2 >> 8);
            puVar9 = puVar9 + 3;
            puVar8 = (ushort *)((int)puVar8 + (int)piStack_24);
            iVar7 = iVar7 + 1;
            piVar6 = piStack_24;
          } while (iVar7 < *(int *)(this + 0x10) - *(int *)(this + 8));
        }
        iVar2 = *(int *)(this + 0x10) - *(int *)(this + 8);
        puVar8 = (ushort *)((int)puVar8 + ((int)puVar10 - iVar2 * (int)piVar6));
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)(this + 0x14) - *(int *)(this + 0xc));
    }
    (**(code **)(*piStack_20 + 0x28))(piStack_20);
    do {
      iVar5 = (**(code **)(*piStack_24 + 8))(piStack_24);
    } while (0 < iVar5);
  }
  return;
}

