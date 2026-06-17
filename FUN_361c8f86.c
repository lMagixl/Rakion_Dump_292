
void __fastcall FUN_361c8f86(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = &PTR_FUN_3624938c;
  if (param_1[0x12] != 0) {
    FUN_361db487(param_1[0x12]);
    FUN_361db4aa((int *)param_1[0x12]);
  }
  if ((HGDIOBJ)param_1[2] != (HGDIOBJ)0x0) {
    DeleteObject((HGDIOBJ)param_1[2]);
  }
  piVar1 = (int *)param_1[0x13];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  return;
}

