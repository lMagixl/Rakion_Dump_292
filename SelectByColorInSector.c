
/* public: void __thiscall CBrushPolygon::SelectByColorInSector(class CSelection<class
   CBrushPolygon,256> &) */

void __thiscall
CBrushPolygon::SelectByColorInSector
          (CBrushPolygon *this,CSelection<class_CBrushPolygon,256> *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x13c1e0  3217
                       ?SelectByColorInSector@CBrushPolygon@@QAEXAAV?$CSelection@VCBrushPolygon@@$0BAA@@@@Z
                        */
  puStack_8 = &LAB_36219620;
  local_c = ExceptionList;
  iVar1 = *(int *)(this + 0x1ac);
  piVar4 = (int *)(iVar1 + 0x18);
  iVar5 = 0;
  local_4 = 0;
  ExceptionList = &local_c;
  if (0 < *piVar4) {
    do {
      iVar3 = *(int *)(iVar1 + 0x1c) + iVar5 * 0x1d0;
      uVar2 = *(uint *)(iVar3 + 200);
      if (((((uVar2 & 0x400000) == 0) || ((uVar2 & 0x8020) != 0)) && ((uVar2 & 0x100) == 0)) &&
         (*(int *)(iVar3 + 0xc4) == *(int *)(this + 0xc4))) {
        FUN_360ccda0(param_1,iVar3);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *piVar4);
  }
  ExceptionList = local_c;
  return;
}

