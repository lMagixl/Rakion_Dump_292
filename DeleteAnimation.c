
/* public: void __thiscall CAnimData::DeleteAnimation(long) */

void __thiscall CAnimData::DeleteAnimation(CAnimData *this,long param_1)

{
  void *pvVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x1fcb0  1460  ?DeleteAnimation@CAnimData@@QAEXJ@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3620ecee;
  local_c = ExceptionList;
  if (1 < *(int *)(this + 0x14)) {
    iVar4 = *(int *)(this + 0x14) + -1;
    ExceptionList = &local_c;
    piVar2 = (int *)thunk_FUN_361bf99c(iVar4 * 0x2c + 4);
    iVar3 = 0;
    local_4 = 0;
    if (piVar2 == (int *)0x0) {
      local_10 = (int *)0x0;
    }
    else {
      local_10 = piVar2 + 1;
      *piVar2 = iVar4;
      _eh_vector_constructor_iterator_(local_10,0x2c,iVar4,FUN_3601f4c0,FUN_3601f4d0);
    }
    local_4 = 0xffffffff;
    if (0 < *(int *)(this + 0x14)) {
      iVar4 = 0;
      piVar2 = local_10;
      do {
        if (iVar3 != param_1) {
          FUN_3601f4f0(piVar2,(char *)(*(int *)(this + 0x18) + iVar4));
          piVar2 = piVar2 + 0xb;
        }
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + 0x2c;
      } while (iVar3 < *(int *)(this + 0x14));
    }
    pvVar1 = *(void **)(this + 0x18);
    if (pvVar1 != (void *)0x0) {
      _eh_vector_destructor_iterator_(pvVar1,0x2c,*(int *)((int)pvVar1 + -4),FUN_3601f4d0);
      operator_delete__((void *)((int)pvVar1 + -4));
    }
    *(int **)(this + 0x18) = local_10;
    *(int *)(this + 0x14) = *(int *)(this + 0x14) + -1;
  }
  ExceptionList = local_c;
  return;
}

