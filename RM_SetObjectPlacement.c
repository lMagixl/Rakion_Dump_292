
/* void __cdecl RM_SetObjectPlacement(class CModelInstance &,class Matrix<float,3,3> const &,class
   Vector<float,3> const &) */

void __cdecl
RM_SetObjectPlacement(CModelInstance *param_1,Matrix<float,3,3> *param_2,Vector<float,3> *param_3)

{
                    /* 0x163180  2935
                       ?RM_SetObjectPlacement@@YAXAAVCModelInstance@@ABV?$Matrix@M$02$02@@ABV?$Vector@M$02@@@Z
                        */
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)param_2;
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)param_3;
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_3 + 4);
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_3 + 8);
  return;
}

