
undefined4 __cdecl FUN_3614ded0(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if ((param_1 != 0) && (puVar2 = *(undefined4 **)(param_1 + 0x1c), puVar2 != (undefined4 *)0x0)) {
    puVar2[6] = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[3] = 0;
    puVar2[8] = 0;
    puVar2[9] = 0;
    puVar2[0xc] = 0;
    puVar2[0xd] = 0;
    puVar1 = puVar2 + 0x14a;
    puVar2[0x19] = puVar1;
    puVar2[0x12] = puVar1;
    puVar2[0x11] = puVar1;
    return 0;
  }
  return 0xfffffffe;
}

