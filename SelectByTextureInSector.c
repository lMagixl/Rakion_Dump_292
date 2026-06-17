
/* public: void __thiscall CBrushPolygon::SelectByTextureInSector(class CSelection<class
   CBrushPolygon,256> &,long) */

void __thiscall
CBrushPolygon::SelectByTextureInSector
          (CBrushPolygon *this,CSelection<class_CBrushPolygon,256> *param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x13c140  3218
                       ?SelectByTextureInSector@CBrushPolygon@@QAEXAAV?$CSelection@VCBrushPolygon@@$0BAA@@@J@Z
                        */
  puStack_8 = &LAB_3621960e;
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
         (*(int *)(param_2 * 0x38 + 0x30 + iVar3) == *(int *)(this + param_2 * 0x38 + 0x30))) {
        FUN_360ccda0(param_1,iVar3);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *piVar4);
  }
  ExceptionList = local_c;
  return;
}

