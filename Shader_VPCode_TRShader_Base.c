
void __cdecl Shader_VPCode_TRShader_Base(undefined4 *param_1,int param_2)

{
  char *pcVar1;
  
                    /* 0x182e50  4460  Shader_VPCode_TRShader_Base */
  if (param_2 == 0) {
    pcVar1 = StringDuplicate(s_vs_1_1_m4x4_oPos__v0__c0_mov_r0__3623d7f8);
    StringFree((char *)*param_1);
    *param_1 = pcVar1;
    return;
  }
  if (param_2 == 1) {
    pcVar1 = StringDuplicate(s_vs_1_1_m4x4_oPos__v0__c0_mov_oT0_3623d8b0);
    StringFree((char *)*param_1);
    *param_1 = pcVar1;
  }
  return;
}

