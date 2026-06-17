
void __fastcall FUN_3606de10(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *in_EAX;
  
  *param_2 = 0;
  while (puVar1 = in_EAX, puVar1 != (undefined4 *)0x0) {
    in_EAX = (undefined4 *)*puVar1;
    if (0 < (int)puVar1[4]) {
      *puVar1 = *param_2;
      *param_2 = puVar1;
    }
  }
  return;
}

