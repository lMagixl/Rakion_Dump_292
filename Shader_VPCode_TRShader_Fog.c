
void __cdecl Shader_VPCode_TRShader_Fog(undefined4 *param_1)

{
  char *pcVar1;
  
                    /* 0x182f20  4461  Shader_VPCode_TRShader_Fog */
  pcVar1 = StringDuplicate(s_vs_1_1_m4x4_oPos__v0__c0_dp3_r10_3623d958);
  StringFree((char *)*param_1);
  *param_1 = pcVar1;
  return;
}

