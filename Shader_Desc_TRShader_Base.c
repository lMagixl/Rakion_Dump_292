
void __cdecl Shader_Desc_TRShader_Base(int param_1)

{
  undefined4 *puVar1;
  
                    /* 0x182ed0  4448  Shader_Desc_TRShader_Base */
  *(undefined4 *)(param_1 + 0x30) = 2;
  *(undefined4 *)(param_1 + 0x34) = 1;
  *(undefined4 *)(param_1 + 0x28) = 2;
  puVar1 = (undefined4 *)thunk_FUN_361bf99c(0xc);
  *(undefined4 **)(param_1 + 0x2c) = puVar1;
  *puVar1 = 0x80000001;
  *(undefined4 *)(*(int *)(param_1 + 0x2c) + 4) = 0x80000001;
  return;
}

