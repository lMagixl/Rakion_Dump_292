
void __fastcall FUN_3606deb0(undefined4 param_1,undefined4 *param_2,int param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined4 *in_EAX;
  int *unaff_ESI;
  int *unaff_EDI;
  
  *param_2 = 0;
  *param_4 = 0;
  *unaff_EDI = 0;
  *unaff_ESI = 0;
  while (in_EAX != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*in_EAX;
    if ((*(byte *)(param_3 + 0xb4 + (int)in_EAX) & 0x70) == 0x30) {
      *in_EAX = *param_4;
      *param_4 = in_EAX;
      *unaff_ESI = *unaff_ESI + in_EAX[2];
      in_EAX = puVar1;
    }
    else {
      *in_EAX = *param_2;
      *param_2 = in_EAX;
      *unaff_EDI = *unaff_EDI + in_EAX[2];
      in_EAX = puVar1;
    }
  }
  return;
}

