
/* public: void __thiscall CBrushPolygon::Triangulate(void) */

void __thiscall CBrushPolygon::Triangulate(CBrushPolygon *this)

{
  CBrushPolygon *pCVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 local_12c [256];
  undefined1 local_2c [4];
  int local_28;
  undefined4 local_1c [2];
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x143740  3855  ?Triangulate@CBrushPolygon@@QAEXXZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36219a19;
  local_c = ExceptionList;
  pCVar1 = this + 0xc;
  ExceptionList = &local_c;
  iVar2 = FUN_3600bea0((undefined4 *)pCVar1);
  if (iVar2 < 1) {
    FUN_36143570(local_12c,(int *)this);
    local_4 = 0;
    FUN_36143290((int)local_12c);
    FUN_36143340((int)local_12c);
    if (local_14 == 0) {
      uVar3 = *(uint *)(this + 200) & 0xdfffffff;
    }
    else {
      uVar3 = *(uint *)(this + 200) | 0x20000000;
    }
    *(uint *)(this + 200) = uVar3;
    iVar2 = FUN_360cb7c0((int)local_2c);
    if (*(int *)pCVar1 != 0) {
      operator_delete__(*(void **)(this + 0x10));
      *(int *)pCVar1 = 0;
      *(undefined4 *)(this + 0x10) = 0;
    }
    if (iVar2 != 0) {
      *(int *)pCVar1 = iVar2;
      uVar4 = thunk_FUN_361bf99c(iVar2 * 4 + 4);
      *(undefined4 *)(this + 0x10) = uVar4;
    }
    iVar5 = 0;
    if (0 < iVar2) {
      do {
        *(undefined4 *)(*(int *)(this + 0x10) + iVar5 * 4) = *(undefined4 *)(local_28 + iVar5 * 4);
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar2);
    }
    FUN_360100e0(this + 0x14,local_1c);
    if (DAT_362fd984 != 0) {
      CTFileStream::Close((CTFileStream *)&DAT_362fda60);
      DAT_362fd984 = 0;
    }
    local_4 = 0xffffffff;
    FUN_36143f20((int)local_12c);
  }
  ExceptionList = local_c;
  return;
}

