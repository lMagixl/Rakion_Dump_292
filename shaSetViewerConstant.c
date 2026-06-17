
/* void __cdecl shaSetViewerConstant(void) */

void __cdecl shaSetViewerConstant(void)

{
  int iVar1;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
                    /* 0x8ed20  4404  ?shaSetViewerConstant@@YAXXZ */
  iVar1 = shaUseHWShaders();
  if (iVar1 != 0) {
    iVar1 = *(int *)(DAT_362c97e4 + 0x658);
    local_10 = *(undefined4 *)(iVar1 + 0x40);
    local_c = *(undefined4 *)(iVar1 + 0x44);
    local_8 = *(undefined4 *)(iVar1 + 0x48);
    local_4 = 0;
    shaSetVertexProgramConst(0x12,(ShaderRegister *)&local_10,1);
  }
  return;
}

