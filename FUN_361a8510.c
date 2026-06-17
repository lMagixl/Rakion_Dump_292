
void __thiscall
FUN_361a8510(void *this,int param_1,void *param_2,int *param_3,int *param_4,uint param_5)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  char cVar4;
  
  cVar4 = FUN_361a4f10();
  uVar3 = param_5;
  piVar2 = param_4;
  if (cVar4 != '\0') {
    if (this != param_2) {
      FUN_361a6c10(this,param_5);
      *(int *)((int)param_2 + 8) = *(int *)((int)param_2 + 8) - uVar3;
    }
    *(int **)param_3[1] = param_4;
    *(int *)param_4[1] = param_1;
    **(undefined4 **)(param_1 + 4) = param_3;
    iVar1 = *(int *)(param_1 + 4);
    *(int *)(param_1 + 4) = param_4[1];
    param_4[1] = param_3[1];
    param_3[1] = iVar1;
    return;
  }
  FUN_361a8230(this,param_1,param_3,param_4);
  FUN_361a7fa0(param_2,&param_4,param_3,piVar2);
  return;
}

