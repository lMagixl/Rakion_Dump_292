
void __thiscall FUN_360bf3c0(void *this,int param_1)

{
  void *pvVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621439b;
  local_c = ExceptionList;
  piVar5 = (int *)0x0;
  if (*(int *)this == 0) {
    ExceptionList = &local_c;
    FUN_360bf0b0(this,param_1);
    ExceptionList = local_c;
    return;
  }
  iVar6 = param_1 + 1;
  ExceptionList = &local_c;
  piVar2 = (int *)thunk_FUN_361bf99c(iVar6 * 0xe8 + 4);
  local_4 = 0;
  if (piVar2 != (int *)0x0) {
    piVar5 = piVar2 + 1;
    *piVar2 = iVar6;
    _eh_vector_constructor_iterator_
              (piVar5,0xe8,iVar6,CRenderModel::CRenderModel,CRenderModel::~CRenderModel);
  }
  iVar6 = 0;
  local_4 = 0xffffffff;
  if (0 < *(int *)this) {
    iVar3 = 0;
    do {
      puVar7 = (undefined4 *)(*(int *)((int)this + 4) + iVar3);
      puVar8 = (undefined4 *)(iVar3 + (int)piVar5);
      for (iVar4 = 0x3a; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
      iVar6 = iVar6 + 1;
      iVar3 = iVar3 + 0xe8;
    } while (iVar6 < *(int *)this);
  }
  pvVar1 = *(void **)((int)this + 4);
  if (pvVar1 != (void *)0x0) {
    _eh_vector_destructor_iterator_
              (pvVar1,0xe8,*(int *)((int)pvVar1 + -4),CRenderModel::~CRenderModel);
    operator_delete__((void *)((int)pvVar1 + -4));
  }
  *(int **)((int)this + 4) = piVar5;
  *(int *)this = param_1;
  ExceptionList = local_c;
  return;
}

