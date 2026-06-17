
void __cdecl FUN_361de0b1(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,0,0x5c);
  *(undefined4 **)(param_1 + 400) = puVar1;
  *puVar1 = FUN_361de087;
  *(undefined1 **)(*(int *)(param_1 + 400) + 4) = &LAB_361ddd2d;
  *(code **)(*(int *)(param_1 + 400) + 8) = FUN_361ddf1a;
  *(code **)(*(int *)(param_1 + 400) + 0xc) = FUN_361ddb23;
  iVar2 = 0x10;
  do {
    *(code **)(iVar2 + *(int *)(param_1 + 400)) = FUN_361ddb23;
    iVar2 = iVar2 + 4;
  } while (iVar2 < 0x50);
  *(code **)(*(int *)(param_1 + 400) + 0x10) = FUN_361dd082;
  *(code **)(*(int *)(param_1 + 400) + 0x48) = FUN_361dd2be;
  FUN_361de087(param_1);
  return;
}

