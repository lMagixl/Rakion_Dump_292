
void __fastcall thunk_FUN_3609d800(int *param_1)

{
  int iVar1;
  
  if (*param_1 != 0) {
    iVar1 = *(int *)(*param_1 + 8);
    if (iVar1 != 0) {
      (*DAT_362c9fb4)(iVar1);
    }
    if (*(int *)(*param_1 + 4) != 0) {
      (*DAT_362c9fb4)(*(int *)(*param_1 + 4));
    }
    if (*(int *)*param_1 != 0) {
      (*DAT_362c9fb4)(*(int *)*param_1);
    }
    *(undefined4 *)*param_1 = 0;
    *(undefined4 *)(*param_1 + 4) = 0;
    *(undefined4 *)(*param_1 + 8) = 0;
    operator_delete((void *)*param_1);
    *param_1 = 0;
    return;
  }
  if (param_1[1] != 0) {
    iVar1 = *(int *)(param_1[1] + 0xc);
    if (iVar1 != 0) {
      (*DAT_362c9fcc)(iVar1);
      operator_delete(*(void **)(param_1[1] + 0xc));
      *(undefined4 *)(param_1[1] + 0xc) = 0;
    }
    if (*(FILE **)param_1[1] != (FILE *)0x0) {
      fclose(*(FILE **)param_1[1]);
      *(undefined4 *)param_1[1] = 0;
    }
    operator_delete((void *)param_1[1]);
    param_1[1] = 0;
  }
  return;
}

