
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: __thiscall CDrawPort::CDrawPort(class CDrawPort *,long) */

CDrawPort * __thiscall CDrawPort::CDrawPort(CDrawPort *this,CDrawPort *param_1,long param_2)

{
  int iVar1;
  CDrawPort *this_00;
  CDrawPort *extraout_ECX;
  CDrawPort *pCVar2;
  undefined4 unaff_EDI;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
                    /* 0x668f0  74  ??0CDrawPort@@QAE@PAV0@J@Z */
  iVar1 = IsTripleHead(param_1);
  if ((iVar1 == 0) || (param_2 == 3)) {
    iVar1 = IsDualHead(this_00);
    uVar7 = (undefined4)_DAT_36227d28;
    uVar8 = (undefined4)((ulonglong)_DAT_36227d28 >> 0x20);
    uVar3 = (undefined4)_DAT_36227d98;
    uVar4 = (undefined4)((ulonglong)_DAT_36227d98 >> 0x20);
    pCVar2 = extraout_ECX;
    uVar5 = uVar7;
    uVar6 = uVar8;
    if (iVar1 != 0) {
      uVar6 = (undefined4)((ulonglong)_DAT_36227cd8 >> 0x20);
      uVar5 = (int)_DAT_36227cd8;
      if (param_2 == 1) {
        InitCloned(this,extraout_ECX,(double)CONCAT44(uVar3,uVar6),
                   (double)CONCAT44((int)_DAT_36227cd8,uVar4),(double)CONCAT44(uVar7,uVar6),
                   (double)CONCAT44(unaff_EDI,uVar8));
        return this;
      }
    }
  }
  else {
    uVar7 = (undefined4)_DAT_36227d28;
    uVar8 = (undefined4)((ulonglong)_DAT_36227d28 >> 0x20);
    uVar5 = (undefined4)_DAT_362287f0;
    uVar6 = (undefined4)((ulonglong)_DAT_362287f0 >> 0x20);
    uVar3 = (undefined4)_DAT_36227d98;
    uVar4 = (undefined4)((ulonglong)_DAT_36227d98 >> 0x20);
    pCVar2 = this_00;
    if (param_2 != -1) {
      if (param_2 == 1) {
        InitCloned(this,this_00,(double)CONCAT44(uVar3,(int)((ulonglong)_DAT_362287e8 >> 0x20)),
                   (double)CONCAT44(uVar5,uVar4),(double)CONCAT44(uVar7,uVar6),
                   (double)CONCAT44(unaff_EDI,uVar8));
        return this;
      }
      InitCloned(this,this_00,(double)CONCAT44(uVar3,uVar6),(double)CONCAT44(uVar5,uVar4),
                 (double)CONCAT44(uVar7,uVar6),(double)CONCAT44(unaff_EDI,uVar8));
      return this;
    }
  }
  InitCloned(this,pCVar2,(double)CONCAT44(uVar3,(int)((ulonglong)_DAT_36227d98 >> 0x20)),
             (double)CONCAT44(uVar5,uVar4),(double)CONCAT44(uVar7,uVar6),
             (double)CONCAT44(unaff_EDI,uVar8));
  return this;
}

