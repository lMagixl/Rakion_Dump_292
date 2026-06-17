
/* public: void __thiscall CBrushPolygon::MovePolygonEdges(class CBrushPolygon &) */

void __thiscall CBrushPolygon::MovePolygonEdges(CBrushPolygon *this,CBrushPolygon *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int local_14;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x13a980  2657  ?MovePolygonEdges@CBrushPolygon@@QAEXAAV1@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_362195c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_3600be20((undefined4 *)(this + 4));
  iVar2 = FUN_3600be20((undefined4 *)(param_1 + 4));
  local_14 = 0;
  local_10 = (void *)0x0;
  iVar5 = iVar2 + iVar1;
  local_4 = 0;
  if (iVar5 != 0) {
    local_14 = iVar5;
    local_10 = (void *)thunk_FUN_361bf99c(iVar5 * 8 + 8);
  }
  iVar4 = 0;
  iVar5 = 0;
  if (0 < iVar1) {
    do {
      iVar5 = *(int *)(this + 8);
      *(undefined4 *)((int)local_10 + iVar4 * 8) = *(undefined4 *)(iVar5 + iVar4 * 8);
      *(undefined4 *)((int)local_10 + iVar4 * 8 + 4) = *(undefined4 *)(iVar5 + 4 + iVar4 * 8);
      iVar4 = iVar4 + 1;
      iVar5 = iVar1;
    } while (iVar4 < iVar1);
  }
  iVar1 = 0;
  if (0 < iVar2) {
    puVar3 = (undefined4 *)((int)local_10 + iVar5 * 8);
    do {
      iVar5 = *(int *)(param_1 + 8);
      *puVar3 = *(undefined4 *)(iVar5 + iVar1 * 8);
      puVar3[1] = *(undefined4 *)(iVar5 + 4 + iVar1 * 8);
      puVar3 = puVar3 + 2;
      iVar1 = iVar1 + 1;
    } while (iVar1 < iVar2);
  }
  FUN_3613c370(this + 4,&local_14);
  if (local_14 != 0) {
    operator_delete__(local_10);
  }
  ExceptionList = local_c;
  return;
}

