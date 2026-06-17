
void __cdecl Shader_PPCode_TRShader_Fog(undefined4 *param_1)

{
  char *pcVar1;
  
                    /* 0x182f50  4453  Shader_PPCode_TRShader_Fog */
  pcVar1 = StringDuplicate(s_tex_t0_mul_t0__t0__c7_mov_r0__t0_3623da60);
  StringFree((char *)*param_1);
  *param_1 = pcVar1;
  return;
}

