
/* public: void __thiscall CBrushMip::SelectSectorsInRange(class CSelection<class CBrushSector,1>
   &,class AABBox<float,3>) */

void __thiscall CBrushMip::SelectSectorsInRange(CBrushMip *this,void *param_1)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  float fVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x139b10  3224
                       ?SelectSectorsInRange@CBrushMip@@QAEXAAV?$CSelection@VCBrushSector@@$00@@V?$AABBox@M$02@@@Z
                        */
  puStack_8 = &LAB_36219532;
  local_c = ExceptionList;
  iVar2 = 0;
  local_4 = 0;
  ExceptionList = &local_c;
  iVar1 = FUN_36043600((int)this);
  if (0 < iVar1) {
    do {
      fVar4 = 0.25;
      puVar3 = &stack0x00000008;
      iVar1 = FUN_36043710(this,iVar2);
      iVar1 = FUN_360cd6d0((void *)(iVar1 + 0x54),(int)puVar3,fVar4);
      if (iVar1 != 0) {
        iVar1 = FUN_36043710(this,iVar2);
        FUN_360cc850(param_1,iVar1);
      }
      iVar2 = iVar2 + 1;
      iVar1 = FUN_36043600((int)this);
    } while (iVar2 < iVar1);
  }
  ExceptionList = local_c;
  return;
}

