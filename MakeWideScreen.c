
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CDrawPort::MakeWideScreen(class CDrawPort *) */

void __thiscall CDrawPort::MakeWideScreen(CDrawPort *this,CDrawPort *param_1)

{
  double dVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 unaff_EDI;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
                    /* 0x669e0  2622  ?MakeWideScreen@CDrawPort@@QAEXPAV1@@Z */
  iVar3 = IsWideScreen(this);
  if (iVar3 == 0) {
    iVar5 = *(int *)(this + 0x10) - *(int *)(this + 8);
    iVar3 = *(int *)(this + 0x14) - *(int *)(this + 0xc);
    iVar4 = (int)((iVar5 * 9 >> 0x1f & 0xfU) + iVar5 * 9) >> 4;
    if (iVar4 <= iVar3 + -10) {
      iVar6 = (iVar3 - iVar4) / 2;
      SetAsCurrent(this);
      Fill(this,0,0,iVar5,iVar6,0xff);
      Fill(this,0,iVar6 + iVar4,iVar5,iVar6,0xff);
      dVar1 = (double)iVar4 / (double)iVar3;
      dVar2 = (double)iVar6 / (double)iVar3;
      InitCloned(param_1,this,
                 (double)CONCAT44(SUB84(dVar2,0),(int)((ulonglong)_DAT_36227d98 >> 0x20)),
                 (double)CONCAT44((int)_DAT_36227d28,(int)((ulonglong)dVar2 >> 0x20)),
                 (double)CONCAT44(SUB84(dVar1,0),(int)((ulonglong)_DAT_36227d28 >> 0x20)),
                 (double)CONCAT44(unaff_EDI,(int)((ulonglong)dVar1 >> 0x20)));
      *(undefined4 *)(param_1 + 0x44) = 0x3f400000;
      return;
    }
  }
  uVar8 = (undefined4)((ulonglong)_DAT_36227d28 >> 0x20);
  uVar7 = (undefined4)((ulonglong)_DAT_36227d98 >> 0x20);
  InitCloned(param_1,this,(double)CONCAT44((int)_DAT_36227d98,uVar7),
             (double)CONCAT44((int)_DAT_36227d28,uVar7),(double)CONCAT44((int)_DAT_36227d28,uVar8),
             (double)CONCAT44(unaff_EDI,uVar8));
  return;
}

