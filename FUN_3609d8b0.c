
void __fastcall FUN_3609d8b0(int *param_1)

{
  if (*param_1 != 0) {
    (*DAT_362c9fbc)(*(undefined4 *)(*param_1 + 8),0);
    return;
  }
  if (param_1[1] != 0) {
    (*DAT_362c9fcc)(*(undefined4 *)(param_1[1] + 0xc));
    fseek(*(FILE **)param_1[1],((undefined4 *)param_1[1])[1],0);
    (*DAT_362c9fd4)(param_1[1],*(undefined4 *)(param_1[1] + 0xc),0,0,PTR_FUN_362a5188,
                    PTR_LAB_362a518c,PTR_LAB_362a5190,PTR_LAB_362a5194);
  }
  return;
}

