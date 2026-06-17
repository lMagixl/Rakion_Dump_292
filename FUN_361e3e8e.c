
void __cdecl FUN_361e3e8e(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,0,0x18);
  *(undefined4 **)(param_1 + 0x18c) = puVar1;
  *(undefined1 *)(puVar1 + 4) = 0;
  *(undefined1 *)((int)puVar1 + 0x11) = 0;
  *puVar1 = &LAB_361e3db3;
  puVar1[1] = FUN_361e3e46;
  puVar1[2] = FUN_361e3d79;
  puVar1[3] = &LAB_361e3e7d;
  *(undefined1 *)(puVar1 + 5) = 1;
  return;
}

