
void __thiscall FUN_361b4400(void *this,int param_1)

{
  CEntity *pCVar1;
  CEntity *this_00;
  void *pvVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621c0db;
  local_c = ExceptionList;
  iVar7 = 0;
  if (*(int *)this == 0) {
    ExceptionList = &local_c;
    FUN_361b41a0(this,param_1);
    ExceptionList = local_c;
    return;
  }
  iVar5 = param_1 + 1;
  ExceptionList = &local_c;
  piVar3 = (int *)thunk_FUN_361bf99c(iVar5 * 0xc + 4);
  local_4 = 0;
  if (piVar3 == (int *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = piVar3 + 1;
    *piVar3 = iVar5;
    _eh_vector_constructor_iterator_
              (piVar4,0xc,iVar5,(_func_void_void_ptr *)&LAB_361b4150,FUN_361b3ee0);
  }
  local_4 = 0xffffffff;
  local_10 = 0;
  if (0 < *(int *)this) {
    do {
      iVar5 = *(int *)(*(int *)((int)this + 4) + iVar7);
      puVar6 = (undefined4 *)(*(int *)((int)this + 4) + iVar7);
      if (iVar5 != 0) {
        piVar3 = (int *)(iVar5 + 0x18);
        *piVar3 = *piVar3 + 1;
      }
      this_00 = *(CEntity **)(iVar7 + (int)piVar4);
      if (this_00 != (CEntity *)0x0) {
        pCVar1 = this_00 + 0x18;
        *(int *)pCVar1 = *(int *)pCVar1 + -1;
        if (*(int *)pCVar1 == 0) {
          CEntity::DeleteSelf(this_00);
        }
      }
      *(undefined4 *)(iVar7 + (int)piVar4) = *puVar6;
      *(undefined4 *)(iVar7 + 4 + (int)piVar4) = puVar6[1];
      *(undefined4 *)(iVar7 + 8 + (int)piVar4) = puVar6[2];
      local_10 = local_10 + 1;
      iVar7 = iVar7 + 0xc;
    } while (local_10 < *(int *)this);
  }
  pvVar2 = *(void **)((int)this + 4);
  if (pvVar2 != (void *)0x0) {
    _eh_vector_destructor_iterator_(pvVar2,0xc,*(int *)((int)pvVar2 + -4),FUN_361b3ee0);
    operator_delete__((void *)((int)pvVar2 + -4));
  }
  *(int **)((int)this + 4) = piVar4;
  *(int *)this = param_1;
  ExceptionList = local_c;
  return;
}

