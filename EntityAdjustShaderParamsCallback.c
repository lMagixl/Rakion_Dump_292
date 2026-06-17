
/* void __cdecl EntityAdjustShaderParamsCallback(void *,long,class CShader *,struct ShaderParams &)
    */

void __cdecl
EntityAdjustShaderParamsCallback(void *param_1,long param_2,CShader *param_3,ShaderParams *param_4)

{
                    /* 0x125750  1570
                       ?EntityAdjustShaderParamsCallback@@YAXPAXJPAVCShader@@AAUShaderParams@@@Z */
  (**(code **)(*(int *)param_1 + 0x38))(param_2,param_3,param_4);
  return;
}

