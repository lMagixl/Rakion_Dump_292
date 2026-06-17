
void __thiscall FUN_3612f350(void *this,int param_1)

{
  int *piVar1;
  CEntity *pCVar2;
  CEntity *this_00;
  void *pvVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36218c7b;
  local_c = ExceptionList;
  iVar5 = 0;
  if (*(int *)this == 0) {
    ExceptionList = &local_c;
    FUN_3612f1f0(this,param_1);
    ExceptionList = local_c;
    return;
  }
  iVar7 = param_1 + 1;
  ExceptionList = &local_c;
  piVar4 = (int *)thunk_FUN_361bf99c(iVar7 * 8 + 4);
  local_4 = 0;
  if (piVar4 == (int *)0x0) {
    piVar6 = (int *)0x0;
  }
  else {
    piVar6 = piVar4 + 1;
    *piVar4 = iVar7;
    _eh_vector_constructor_iterator_
              (piVar6,8,iVar7,(_func_void_void_ptr *)&LAB_3612f180,
               (_func_void_void_ptr *)&LAB_3612f190);
  }
  local_4 = 0xffffffff;
  if (0 < *(int *)this) {
    do {
      iVar7 = *(int *)(*(int *)((int)this + 4) + iVar5 * 8);
      piVar4 = (int *)(*(int *)((int)this + 4) + iVar5 * 8);
      if (iVar7 != 0) {
        piVar1 = (int *)(iVar7 + 0x18);
        *piVar1 = *piVar1 + 1;
      }
      this_00 = (CEntity *)piVar6[iVar5 * 2];
      if (this_00 != (CEntity *)0x0) {
        pCVar2 = this_00 + 0x18;
        *(int *)pCVar2 = *(int *)pCVar2 + -1;
        if (*(int *)pCVar2 == 0) {
          CEntity::DeleteSelf(this_00);
        }
      }
      piVar6[iVar5 * 2] = *piVar4;
      piVar6[iVar5 * 2 + 1] = piVar4[1];
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)this);
  }
  pvVar3 = *(void **)((int)this + 4);
  if (pvVar3 != (void *)0x0) {
    _eh_vector_destructor_iterator_
              (pvVar3,8,*(int *)((int)pvVar3 + -4),(_func_void_void_ptr *)&LAB_3612f190);
    operator_delete__((void *)((int)pvVar3 + -4));
  }
  *(int **)((int)this + 4) = piVar6;
  *(int *)this = param_1;
  ExceptionList = local_c;
  return;
}

