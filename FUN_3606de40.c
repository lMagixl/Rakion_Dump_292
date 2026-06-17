
void __cdecl FUN_3606de40(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *in_EAX;
  byte bVar2;
  undefined4 *unaff_EBX;
  int *unaff_ESI;
  int *unaff_EDI;
  
  *unaff_EBX = 0;
  *param_3 = 0;
  *unaff_EDI = 0;
  *unaff_ESI = 0;
  while (in_EAX != (undefined4 *)0x0) {
    bVar2 = *(byte *)(param_1 + 0xb4 + (int)in_EAX) & 0x70;
    puVar1 = (undefined4 *)*in_EAX;
    if (((bVar2 == 0) || (bVar2 == 0x30)) &&
       ((*(byte *)((int)in_EAX + param_2 + 0xb4) & 0x70) == 0x30)) {
      *in_EAX = *param_3;
      *param_3 = in_EAX;
      *unaff_ESI = *unaff_ESI + in_EAX[2];
      in_EAX = puVar1;
    }
    else {
      *in_EAX = *unaff_EBX;
      *unaff_EBX = in_EAX;
      *unaff_EDI = *unaff_EDI + in_EAX[2];
      in_EAX = puVar1;
    }
  }
  return;
}

