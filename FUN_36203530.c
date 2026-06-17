
void FUN_36203530(undefined4 *param_1,float *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = 0;
  if (0 < (int)param_1[2]) {
    puVar2 = param_1 + 3;
    do {
      FUN_361fd990(*(float **)*puVar2,(float)param_1[1],(float *)*param_1,
                   (float *)**(undefined4 **)(((int)param_2 - (int)param_1) + (int)puVar2),
                   param_2[1],*param_2);
      iVar1 = iVar1 + 1;
      puVar2 = puVar2 + 1;
    } while (iVar1 < (int)param_1[2]);
  }
  return;
}

