
/* public: void __thiscall CStock_CTextureData::FreeUnused(void) */

void __thiscall CStock_CTextureData::FreeUnused(CStock_CTextureData *this)

{
  int iVar1;
  CSerial *this_00;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int local_1c [4];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0xf0930  1679  ?FreeUnused@CStock_CTextureData@@QAEXXZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36216411;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  do {
    FUN_360f0ec0(local_1c);
    iVar4 = 0;
    local_4 = 1;
    iVar1 = FUN_3608a5a0((int)this);
    if (0 < iVar1) {
      do {
        this_00 = (CSerial *)FUN_3608a4e0(this,iVar4);
        iVar1 = CSerial::IsUsed(this_00);
        if (iVar1 == 0) {
          uVar2 = FUN_3608a4e0(this,iVar4);
          FUN_360f0ee0(local_1c,uVar2);
        }
        iVar4 = iVar4 + 1;
        iVar1 = FUN_3608a5a0((int)this);
      } while (iVar4 < iVar1);
    }
    iVar1 = FUN_3608a5a0((int)local_1c);
    iVar5 = 0;
    local_4 = CONCAT31(local_4._1_3_,2);
    iVar4 = FUN_3608a5a0((int)local_1c);
    if (0 < iVar4) {
      do {
        if (DAT_362c5480 != 0) {
          iVar4 = FUN_3608a4e0(local_1c,iVar5);
          CPrintF(s_Deleting___s__36232c24,*(undefined4 *)(iVar4 + 0xc),
                  *(undefined4 *)(iVar4 + 0x10));
        }
        iVar4 = FUN_3608a4e0(local_1c,iVar5);
        FUN_360f0dd0(this,iVar4);
        iVar4 = FUN_3608a4e0(local_1c,iVar5);
        FUN_360f0080(this + 0x10,iVar4);
        puVar3 = (undefined4 *)FUN_3608a4e0(local_1c,iVar5);
        if (puVar3 != (undefined4 *)0x0) {
          (**(code **)*puVar3)(1);
        }
        iVar5 = iVar5 + 1;
        iVar4 = FUN_3608a5a0((int)local_1c);
      } while (iVar5 < iVar4);
    }
    local_4 = 0xffffffff;
    FUN_360f0f50(local_1c);
  } while (0 < iVar1);
  ExceptionList = pvStack_c;
  return;
}

