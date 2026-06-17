
void __cdecl
FUN_3613c750(int param_1,int param_2,int *param_3,int param_4,int *param_5,int *param_6)

{
  int *piVar1;
  
  *param_5 = 0;
  *param_6 = 0;
  piVar1 = (int *)**(int **)(param_1 + 8);
  if ((piVar1 != param_3) && ((*piVar1 == param_4 || (piVar1[1] == param_4)))) {
    *param_5 = (int)*(int **)(param_1 + 8);
  }
  piVar1 = *(int **)(*(int *)(param_1 + 8) + 8);
  if ((piVar1 != param_3) && ((*piVar1 == param_4 || (piVar1[1] == param_4)))) {
    *param_5 = *(int *)(param_1 + 8) + 8;
  }
  piVar1 = *(int **)(*(int *)(param_1 + 8) + 0x10);
  if ((piVar1 != param_3) && ((*piVar1 == param_4 || (piVar1[1] == param_4)))) {
    *param_5 = *(int *)(param_1 + 8) + 0x10;
  }
  piVar1 = (int *)**(int **)(param_2 + 8);
  if ((piVar1 != param_3) && ((*piVar1 == param_4 || (piVar1[1] == param_4)))) {
    *param_6 = (int)*(int **)(param_2 + 8);
  }
  piVar1 = *(int **)(*(int *)(param_2 + 8) + 8);
  if ((piVar1 != param_3) && ((*piVar1 == param_4 || (piVar1[1] == param_4)))) {
    *param_6 = *(int *)(param_2 + 8) + 8;
  }
  piVar1 = *(int **)(*(int *)(param_2 + 8) + 0x10);
  if ((piVar1 != param_3) && ((*piVar1 == param_4 || (piVar1[1] == param_4)))) {
    *param_6 = *(int *)(param_2 + 8) + 0x10;
  }
  return;
}

