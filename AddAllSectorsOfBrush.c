
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CCastRay::AddAllSectorsOfBrush(class CBrush3D *) */

void __thiscall CCastRay::AddAllSectorsOfBrush(CCastRay *this,CBrush3D *param_1)

{
  CBrushMip *this_00;
  int iVar1;
  int iVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0xdd2c0  947  ?AddAllSectorsOfBrush@CCastRay@@QAEXPAVCBrush3D@@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36215318;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this_00 = CBrush3D::GetBrushMipByDistance(param_1,DAT_362fcba4);
  iVar3 = 0;
  if (this_00 != (CBrushMip *)0x0) {
    local_4 = 0;
    iVar1 = FUN_36043600((int)this_00);
    if (0 < iVar1) {
      do {
        iVar1 = FUN_36043710(this_00,iVar3);
        if ((*(byte *)(iVar1 + 0x44) & 0x40) == 0) {
          DAT_362cc0cc = DAT_362cc0cc + 1;
          iVar2 = FUN_360de590((undefined4 *)&DAT_362cc0c4);
          if (iVar2 < DAT_362cc0cc) {
            iVar2 = FUN_360de590((undefined4 *)&DAT_362cc0c4);
            FUN_360de680(&DAT_362cc0c4,iVar2 + _DAT_362cc0d0);
          }
          *(int *)(DAT_362cc0c8 + -4 + DAT_362cc0cc * 4) = iVar1;
          *(uint *)(iVar1 + 0x44) = *(uint *)(iVar1 + 0x44) | 0x40;
        }
        iVar3 = iVar3 + 1;
        iVar1 = FUN_36043600((int)this_00);
      } while (iVar3 < iVar1);
    }
  }
  ExceptionList = local_c;
  return;
}

