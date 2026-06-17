
void __cdecl Shader_Desc_TRShader_Fog(int param_1)

{
  undefined4 *puVar1;
  
                    /* 0x182f80  4449  Shader_Desc_TRShader_Fog */
  *(undefined4 *)(param_1 + 0x30) = 1;
  *(undefined4 *)(param_1 + 0x34) = 1;
  *(undefined4 *)(param_1 + 0x28) = 1;
  puVar1 = (undefined4 *)thunk_FUN_361bf99c(8);
  *(undefined4 **)(param_1 + 0x2c) = puVar1;
  *puVar1 = 0x80000001;
  return;
}

