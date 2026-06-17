
/* public: void __thiscall CAnimSet::RemoveAnimation(struct Animation *) */

void __thiscall CAnimSet::RemoveAnimation(CAnimSet *this,Animation *param_1)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  int local_14;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x153af0  3121  ?RemoveAnimation@CAnimSet@@QAEXPAUAnimation@@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36219b5b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_3600c5e0((undefined4 *)(this + 0x14));
  iVar3 = 0;
  local_14 = 0;
  local_10 = (void *)0x0;
  local_4 = 0;
  FUN_36019d40(&local_14,iVar1 + -1);
  pvVar2 = local_10;
  if (0 < iVar1) {
    do {
      if ((Animation *)(*(int *)(this + 0x18) + iVar3) != param_1) {
        FUN_3601a990(pvVar2,(undefined4 *)(*(int *)(this + 0x18) + iVar3));
        pvVar2 = (void *)((int)pvVar2 + 0x2c);
      }
      iVar3 = iVar3 + 0x2c;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_3601cd70(this + 0x14,&local_14);
  local_4 = 0xffffffff;
  if ((local_14 != 0) && (local_10 != (void *)0x0)) {
    pvVar2 = (void *)((int)local_10 + -4);
    _eh_vector_destructor_iterator_(local_10,0x2c,*(int *)((int)local_10 + -4),FUN_36019c80);
    operator_delete__(pvVar2);
  }
  ExceptionList = local_c;
  return;
}

